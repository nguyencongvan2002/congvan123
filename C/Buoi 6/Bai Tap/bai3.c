#include <stdio.h>

int main(void){
	int a, *a_ptr;
	a_ptr = &a;
	double BMI, *BMI_ptr, Weight, *Weight_ptr, Height, *Height_ptr;
	BMI_ptr = &BMI;
	Weight_ptr = &Weight;
	Height_ptr = &Height;
	printf("Enter your gender (0 for female, 1 for male): ");
	scanf("%d", &a_ptr);
	printf("Enter your weight (kg) and height (m): ");
	scanf("%lf %lf", &Weight, &Height);
	*BMI_ptr = *Weight_ptr / (*Height_ptr*(*Height_ptr));
	
	switch(a){
		case 0:
			printf("female\n");
			if(*BMI_ptr <= 19){
				printf("You are a little skinny");
			}else if(19 < *BMI_ptr && *BMI_ptr <= 24){
				printf("You are in good shape");
			}else if(*BMI_ptr > 24){
				printf("You are a little big");
			}
			break;
		case 1:
			printf("male\n");
			if(*BMI_ptr <= 20){
				printf("You are a little skinny");
			}else if(20 < *BMI_ptr && *BMI_ptr <= 25){
				printf("You are in good shape");			
			}else if(*BMI_ptr > 25){
				printf("You are a little big");	
			}
			break;
		default:
			printf("\nsai");
	}
}
