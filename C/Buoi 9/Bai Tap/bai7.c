#include <stdio.h>

typedef struct{
	char name[20];
	int year;
	int Price;
	int Maxspeed;
}Car;

void scanYear(Car*);
int main(void){
	Car c;
	scanYear(&c);

}

void scanYear(Car *c){
	int b = 0;
	char name[20];
		printf("\nEnter Name: ");
		scanf("\n%s", &name);
		strcpy(c->name, name);
		printf("\nName %s", c->name);
	do{
		int year;
		printf("\nEnter year: ");
		scanf("\n%d", &year);
		c->year = year;
		
		if(c->year >= 1980 && c->year <= 2019){
			printf("\nyear: %d", c->year);
			b = 0;
		}else{
			printf("\nYear must be from 1980 to 2019:");
			b = 1;
		}
	}while(b == 1);
	
	do{
		int Price;
		printf("\nEnter Price: ");
		scanf("%d", &Price);
		c->Price = Price;
		
		if(c->Price >= 30000 && c->Price <= 400000){
			printf("\nPrice: %d", c->Price);
			b = 0;
		}else{
			printf("\nPrice must be from $30,000 to $400,000: ");
			b = 1;
		}
	}while(b == 1);
		c->Maxspeed = 300;
		printf("\nMaxspeed: %d", c->Maxspeed);
}





