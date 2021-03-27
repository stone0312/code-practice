//----------switch_two_number----------//
//-------------2020.03.27--------------//

#include<stdio.h>

void swap(int x,int y);
	
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

void swap(int x,int y)
{
	int *temp;

	temp=&x;

	&x=&y;//wrong $ can only live on the right

	&y=temp;//wrong & can only live on the right 
	
	printf("a in swap is %d\n",x);
	printf("b in swao is %d\n",y);
}




