#include <stdio.h>

typedef struct{
	float  a;
	float  b;
	float  c;
}Triangle;

int isTriangle(float, float, float);
int main(void){
	Triangle tr;
	float a,b,c;
	printf("nhap gia tri a: ");
	scanf("%f", &a);
	printf("nhap gia tri b: ");
	scanf("%f", &b);
	printf("nhap gia tri c: ");
	scanf("%f", &c);
	tr.a = a;
	tr.b = b;
	tr.c = c;
	
	int is = isTriangle(a,b,c);
	if(is == 1){
		printf("Triangle is valid");
	}else{
		printf("Triangle is Not valid");
	}
}

int isTriangle(float a, float b, float c){
	float is;
	if(a + b > c && a + c > b && b + c > a){
		return 1;
	}else{
		return 0;
	}
}
