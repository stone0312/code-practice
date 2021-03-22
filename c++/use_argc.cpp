//------------use_argc_in_main---------//
//---------------2020.11.05------------//


#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{

	int i;
	for (i = 0; i < argc ; i++) 
		cout <<argv[i]<< endl;
		cin>>i;
	return 0;
}
