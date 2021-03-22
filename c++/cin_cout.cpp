//c++ cin cout iostream learning//
//----------2020.08.08----------//
//-------------sy---------------//

#include<iostream>

int main()

{
	using namespace std;

	int carrots;
	
	cout << "how many carrots do you have ?"<<endl ;
	cin  >> carrots ;
	cout << "here are 2 carrots";
	carrots=carrots+2;
	cout << "\nnow you have "
		 << carrots 
		 << " carrots"
		 <<endl;

	return 0;
}
