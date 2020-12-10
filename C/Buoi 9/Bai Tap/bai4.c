#include <stdio.h>

typedef struct{
	char name[20];
	char year[20];
	int pice;
}Car;

int main(void){
	Car c;
	c.pice = 15000000;
	strcpy(c.name, "lambo");
	strcpy(c.year, "10,04,2002");
	printf("name: %s\n", c.name);
	printf("year: %s\n", c.year);
	printf("pice: %d\n", c.pice);
}
