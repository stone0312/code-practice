//-------using sizeof--------//
//-------2020.08.18-----------//
//----------sy----------------//



#include<iostream>

int main()
{
	using namespace std;

	int *p;
	char *p_char;
	double *p_double;

	cout << " the sizeof the int * is "<< sizeof *p <<endl;
	cout << " the sizeof the char * is "<<sizeof *p_char <<endl;
	cout << " the sizeof the double * is "<<sizeof *p_double <<endl;

return 0;
}
