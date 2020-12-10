#include <stdio.h>

int main(void){
	int year;
	printf("Enter a year: ");
	scanf("%d", &year);
	if (year % 4 && year%100!=0  ||year%400==0) {
		printf("It is NOT a leap year.");
	}else{
		printf("It is a LEAP year.");
	}
}
