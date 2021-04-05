/* ============================================================================
 File:		  fftw3_test.cpp
 Description: test fftw3.h and learn bacsic c++ grammar
 Author:      stone
 date:        2021.04.05
 Website:     http://github.com/stone/code_practice_github
 Version:     1.0
 Note:        

 ============================================================================*/

#include<iostream>
#include"fftw3.h"

#define REAL 0
#define IMAG 1

using namespace std;

int main ()
{

	fftw_complex x[5];
	fftw_complex y[5];

	for (int i = 0; i < 5; i++)
	{
		x[i][REAL] = i;
		x[i][IMAG] = 0;
	}

	fftw_plan plan = fftw_plan_dft_1d(5, x, y, FFTW_FORWARD, FFTW_ESTIMATE);
	fftw_execute(plan);

	for (int i = 0; i<5; i++)
	{
	cout << y[i][REAL] <<"  " <<y[i][IMAG] <<endl;
	}

	fftw_destroy_plan(plan);

	cout << "\n Press Enter to exit..." <<endl;
	cin.get();

	return 0;
}
