//-----------save_armadillo_data---------//
//--------------2021.08.24---------------//
//-------------------sy------------------//

#include<iostream>
#include<armadillo>

	using namespace std;
	using namespace arma;

int main()

{

	int a=100;
	int b=10; 
	int i;
	int j;

	mat A;
	A.zeros(a,b);
	for (j=0; j<b; j++)
	{
		A(50,j)=1;
	}

	A.print("A:");

	float ** p = new float *[a];
	
	for (i = 0; i < a; i++)
	{
		p[i] = new float [b];
	}
	for (i = 0; i < a; i++)
	{
		for(j = 0; j < b; j++)
		{
		p[i][j] = 0;
		}
	}
	for (i = 0; i < a; i++)
	{
		for(j = 0; j < b; j++)
		{
//		p[i][j] = A(j,i);
		p[i][j] = A(i,j);
		}
	}

	for (i = 0; i < a; i++)
	{
		cout << endl;
		for(j = 0; j < b; j++)
		{
		cout << p[i][j] <<" ";
		}
	}
	ofstream ouF;
    ouF.open("./data1.dat",ios::binary);
	for (j=0;j<b;j++)
	{

		for(i=0;i<a;i++)
		{

		ouF.write((char*)&p[i][j],sizeof(p[i][j]));
	
		}

	}
    ouF.close();


	for (i = 0 ;i< a ; i++)
	{
		delete [] p[i];
	}

return 0;
}
