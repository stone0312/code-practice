//--------use_argc_in_main--------//
//------------2020.12.15----------//

#include<stdio.h>

int main(int argc,char *argv[])
{
	//print arguments
	
	printf("\n");

	for(int i=0;i < argc; i++)
	{
	printf("%s\n",argv[i]);

	printf("\n");
	}

}
