#include <stdio.h>

int main(void){
	int inch;
	printf("Enter the distance in inches: ");
	scanf("%d", &inch);
	printf("%d inches = %f", inch, inch*2.54);
}
