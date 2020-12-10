#include <stdio.h>

int main(void){
	float a,b;
	printf("Enter the first number:");
	scanf("\%f", &a);
	printf("\n a = %f", a);
	printf("\nEnter the second number: ");
	scanf("\n%f", &b);
	printf("\n b = %f", b);
	
	float c = a;
	a = b;
	b = c;
	printf("\na = %f", a);
	printf("\nb = %f", b);
}
