//------using the new for array------//
//-----------2020.08.12--------------//
//----------------sy-----------------//

#include<iostream>

int main ()
{
	using namespace std;

	double * p = new double [3];

	p [1] = 0.1 ;
	p [2] = 0.2 ;
	p [3] = 0.3 ;

	cout << " p[1] is " << p [1] << endl;
	p = p + 1 ;
	cout << " now p[1] is " <<p [1] << endl;
	
	p = p - 1 ;

	delete [] p;
	return 0;
}
