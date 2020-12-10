#include <stdio.h>

typedef struct{
	char name[20];
	int year;
	int price;
	int maxSpeed;
}Car;

void printCarList(Car[], int);
int main(void){
	Car c[2];
	printCarList(c, 2);
	
	
}
void printCarList(Car arr[], int size, Car c){
	
	int i;
	printf("No#   |Name      |Year   |Price   |MaxSpeed");
	printf("\n");
	printf("\n %s             %d       %d       %d", );
	for(i = 0; i < size; i++){
		
	
	}
}
