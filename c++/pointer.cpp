//---------------pointer-test----------------//
//-------------2020.08.10--------------------//
//-------------------sy----------------------//


#include<iostream>

int main()
{
	using namespace std;

	int n = 1;
	int *n_address;
	n_address=&n;

	cout << "velue of the n is " << n << endl;

	cout << "address of the n is " << n_address << endl;
	cout << "address of the n is " << &n_address << endl;

return 0;
}
