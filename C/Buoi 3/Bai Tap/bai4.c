#include <stdio.h>

int main(void){
	int a;
	double BMI,Weight,Height;
	printf("Enter your gender (0 for female, 1 for male): ");
	scanf("%d", &a);
	printf("Enter your weight (kg) and height (m): ");
	scanf("%lf %lf", &Weight, &Height);
	BMI = Weight / (Height*Height);
	
	switch(a){
		case 0:
			printf("female\n");
			if(BMI <= 19){
				printf("You are a little skinny");
			}else if(19 < BMI && BMI <= 24){
				printf("You are in good shape");
			}else if(BMI > 24){
				printf("You are a little big");
			}
			break;
		case 1:
			printf("male\n");
			if(BMI <= 20){
				printf("You are a little skinny");
			}else if(20 < BMI && BMI <= 25){
				printf("You are in good shape");			
			}else if(BMI > 25){
				printf("You are a little big");	
			}
			break;
		default:
			printf("\nmark");
	}
}
