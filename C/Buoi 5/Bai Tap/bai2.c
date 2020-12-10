#include <stdio.h>

double inchToCm(double);


int main(void){
	double a = 2.54;
	double iC = inchToCm(a);
	printf("iC = %lf", iC);
}

double inchToCm(double inch){
	double cm;
	cm = 3 * inch;
	return cm;
}

