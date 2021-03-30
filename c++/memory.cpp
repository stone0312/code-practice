//-----------open_2d_memory------------//
//-------------2021.03.30--------------//

#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
	
	int **p;
	int i,j;

	p = new int *[4];
	for (i=0;i<4;i++)
	{

		p[i] = new int [8];

	}

	for(i=0;i<4;i++)
	{

		for(j=0;j<8;j++)
		{

		p[i][j]=j*i;

		}

	}

	for(i=0;i<4;i++)
	{

		for(j=0;j<8;j++)
		{

		cout<<p[i][j]<<"\t";

		}

	}

	for(i=0;i<4;i++)
	{
		delete [] p[i];
	}
	delete [] p;

	return 0;
}



