//------------file_io_binary-----------//
//-------------2021.03.28--------------//

#include<iostream>
#include<fstream>

using namespace std;


int main(int argc, char*argv[])
{

	int a[5]={1,2,3,4,5};
	int b[5];

	ofstream ouF;
	//ouF.open("./me.dat",std::ofstream::binary);
	ouF.open("./me.dat",ios::binary);
	//ouF.write(reinterpret_cast<const char*>(a),sizeof(int)*5);
	ouF.write((char*)&a,sizeof(a));
	ouF.close();

	ifstream inF;
	inF.open("./me.dat",std::ofstream::binary);
	inF.read(reinterpret_cast<char*>(b),sizeof(int)*5);
	inF.close();

	for (int i=0;i<5;i++)
	{

	cout <<b[i]<<endl;

	}

	return 0;

}
