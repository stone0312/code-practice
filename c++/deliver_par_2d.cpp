//------------deliver_par_2d-----------//
//---------------2021.08.21------------//


#include<iostream>

using namespace std;

void ces(int **num, int m, int n)
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
		cout << num[i][j] <<" ";
		}
		cout <<endl;
	}
}


int main(int argc, char *argv[])
{

	int m=5, n=5, i, j;
	int **num = new int*[n];	
	for (int i=0; i<m; i++)
	{
		num[i]=new int[n];
	}


	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
		num[i][j]=i*j;
		}
	}

	ces(num,m,n);

	for (int i=0; i<m; i++) 
		{delete[] num[i];}
	delete[] num;
	
	return 0;
}
