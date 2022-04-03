//------------deliver_par_1d-----------//
//---------------2021.08.21------------//


#include<iostream>

using namespace std;

void ces1(int *num)
{
	for(int i=0; i<5; i++)
	{
	cout << num[i] <<endl;
	}
}

void ces2(int *num, int m)
{
	for(int i=0; i<m; i++)
	{
	cout << num[i] <<endl;
	}
}


int main(int argc, char *argv[])
{

	int num1[5];
	for (int i=0; i<5; i++)
	{
		num1[i]=i;
	}
	ces1(num1);

	int k=5;
	int *num2 = new int[k];	
	for (int i=0; i<k; i++)
	{
		num2[i]=i+1;
	}
	ces2(num2,k);

	delete[] num2;
	
	return 0;
}
