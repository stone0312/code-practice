//-----------using the new for array 2d matrix---------//
//------------------2020.09.16-------------------------//
//----------------------sy-----------------------------//

#include<iostream>

int main()

{
	using namespace std;

	int a;
	int b; 
	int i;
	int j;

	double ** p = new double *[a];
	
	for (i = 0; i < a; i++)
	{
		p[i] = new double [b];
	}
	for (i = 0; i < a; i++)
	{
		for(j = 0; j < b; j++)
		{
			p[i][j] = 0.0;
		}
	}

	for (i = 0 ;i< a ; i++)
	{
		delete [] p[i];
	}

return 0;
}
