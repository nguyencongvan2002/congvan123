#include <stdio.h>

typedef struct{
	int year;	
}Car;

void scanYear(Car *c);
int main(void){
	Car c;
	scanYear(&c);
}
void scanYear(Car *c){
	int flag = 0;
	do{
		int year;
		printf("\nEnter Year: ");
		scanf("%d", &year);
		c->year = year;
		
		if(c->year >= 1980 && c->year <= 2019){
			printf("Year: %d", c->year);
			flag = 0;
		}else{
			printf("Year must be from 1980 to 2019 ");
			flag = 1;
		}
	}while(flag == 1);		
}                                                                                                                                          
