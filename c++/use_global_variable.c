#include<stdio.h>

int x;

void increment(void);

int main(int argc, char *argv[])
{
	printf("x is now %d\n",x);
	printf("Initializing....\n");
	
	x=1;

	printf("Initialized\n");
	printf("x is now %d\n",x);
	increment();
	printf("Incrementing....\n");
	printf("x is now %d\n",x);

}

void increment(void)
{
//	int x=10;
	x++;
}
