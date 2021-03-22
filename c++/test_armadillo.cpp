//------------test_armadillo-------------//
#include <iostream>
#include <armadillo>
 
using namespace std;
using namespace arma;
 
 
int main(int argc, char** argv)
{
	cout<<"Armadillo version: "<<arma_version::as_string()<<endl;
 
	mat A(2, 3);  // directly specify the matrix size (elements are uninitialised)
 
	cout<<"A.n_rows: "<<A.n_rows<<endl;  // .n_rows and .n_cols are read only
	cout<<"A.n_cols: "<<A.n_cols<<endl;
	cout<<A.is_empty()<<endl;
	cout<<static_cast<bool>(A.memptr())<<endl;
 
 
	A(1, 2) = 456.0;  // directly access an element (indexing starts at 0)
	A.print("A:");
 
	A = 5.0;         // scalars are treated as a 1x1 matrix
	A.print("A:");
 
	A.set_size(4, 5); // change the size (data is not preserved)
 
	A.fill(5.0);     // set all elements to a particular value
	A.print("A:");
 
	// endr indicates "end of row"
	A<<0.165300<<0.454037<<0.995795<<0.124098<<0.047084<<endr
		<<0.688782<<0.036549<<0.552848<<0.937664<<0.866401<<endr
		<<0.348740<<0.479388<<0.506228<<0.145673<<0.491547<<endr
		<<0.148678<<0.682258<<0.571154<<0.874724<<0.444632<<endr
		<<0.245726<<0.595218<<0.409327<<0.367827<<0.385736<<endr;
 
	A.print("A:");
 
	cout<<"det(A): "<<det(A)<<endl;
	cout<<"inv(A): "<<endl<<inv(A)<<endl;
 
	// save matrix as a text file
	A.save("A.txt", raw_ascii);
 
	// load from file
	mat B;
	B.load("A.txt");
 
	// imat specifies an integer matrix
	imat AA;
	imat BB;
 
	AA<<1<<2<<3<<endr<<4<<5<<6<<endr<<7<<8<<9;
	BB<<3<<2<<1<<endr<<6<<5<<4<<endr<<9<<8<<7;
 
	// comparison of matrices (element-wise); output of a relational operator is a umat
	umat ZZ = (AA>=BB);
	ZZ.print("ZZ:");
 
 
	// 2D field of matrices; 3D fields are also supported
	field<mat> F(4, 3);
 
	for (uword col = 0; col<F.n_cols; ++col)
	for (uword row = 0; row<F.n_rows; ++row)
	{
		F(row, col) = randu<mat>(2, 3);  // each element in field<mat> is a matrix
	}
 
	F.print("F:");
	return 0;
}









