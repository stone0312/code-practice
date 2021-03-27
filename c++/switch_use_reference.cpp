//----------switch_two_number----------//
//-------------2021.03.27--------------//

#include<iostream>

using namespace std;


void swap(int &x,int &y);
	
	int a;
	int b;

int main()
{
	a=1;
	b=2;
	std::cout << "before exchange,a:" << a <<std::endl;
	std::cout << "before exchange,b:" << b <<std::endl;
	swap(a,b);
	std::cout << "after exchange,a:" << a <<std::endl;
	std::cout << "after exchange,b:" << b <<std::endl;

}

void swap(int &x,int &y)
{
	int temp;

	temp=x;

	x=y;

	y=temp;
	
	std::cout << "in swap ,a:" << a <<std::endl;
	std::cout << "in swap ,b:" << b <<std::endl;
}




