#include <stdio.h>

int main(void){
	float f;
	printf("Enter temp in Fahrenheit: ");
	scanf("%f", &f);
	printf("\nFahrenheit = %f", (f-32)/9*5);	
}
