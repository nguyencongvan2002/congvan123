#include <stdio.h>

double fToC(double);

int main(void){
	double a = 98.4;
	double fC = fToC(a);
	printf("fC = %lf", fC);
}

double fToC(double F){
	double C;
	C = (F - 32)/ 1.8000;
	return C;
}

