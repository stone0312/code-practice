//----------switch_two_number----------//
//-------------2020.12.14--------------//

#include<stdio.h>

int swap(int x,int y);
	
	int a;
	int b;

int main()
{
	a=1;
	b=2;
	printf("a is %d\n",a);
	printf("b is %d\n",b);
	swap(a,b);
	printf("a is %d\n",a);
	printf("b is %d\n",b);

}

int swap(int x,int y)
{
	int temp;

	temp=x;

	x=y;

	y=temp;
	
	printf("a is %d\n",x);
	printf("b is %d\n",y);

	return x ;
	return y ;
}



