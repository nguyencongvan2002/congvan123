#include <stdio.h>

typedef struct{
	int Price;
}Car;
void scanPrice(Car*);

int main(void){
	Car c;
	scanPrice(&c);
}

void scanPrice(Car *c){
	int x = 0;
	do{
		int Price;
		printf("\nEnter Price: ");
		scanf("%d", &Price);
		c->Price = Price;
		if(c->Price >= 30000 && c->Price <= 400000){
			printf("\nPrice: %d", c->Price);
			x = 0;	
		}else{
			printf("\nPrice must be from $30,000 to $400,000");
			x = 1;
		}
	}while(x == 1);
}
