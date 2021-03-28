//----------switch_two_number----------//
//-------------2020.12.14--------------//

#include<stdio.h>

void swap(int *x,int *y);
	
//	int a;
//	int b;

int main()
{
	int	a=1;
	int	b=2;
	printf("a is %d\n",a);
	printf("b is %d\n",b);
	swap(&a,&b);
	printf("a is %d\n",a);
	printf("b is %d\n",b);

}

void swap(int *x,int *y)
{
	//int temp;
	int *temp; //int *temp=x;
	//temp=*x;
	*temp= *x;
	x=y;
	y=temp;

	//*x=*y;

	//*y=temp;
	
	printf("a in swap is %d\n",*x);
	printf("b in swap is %d\n",*y);
}



