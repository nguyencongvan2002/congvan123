#include <stdio.h>

int isLeapYear(int);
int main(void){
	int year;
	printf("Enter a year: ");
	scanf("%d", &year);
	int iLY = isLeapYear(year);
	switch(iLY){
		case 0:
			printf("It is NOT a leap year");
			break;
		case 1:
			printf("It is a LEAP year");
			break;
	}
}

int isLeapYear(int year){
	if(year%400 == 0){
		return 1;
	}else if(year%4 == 0){
		return 1;
	}else{
		return 0;
	}
}  


