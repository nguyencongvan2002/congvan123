#include <stdio.h>

typedef struct{
	float a;
	float b;
	float c;
}Triangle;
int isRightTriangle(float, float, float);
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
	
	int is = isRightTriangle(a,b,c);
	if(is == 1){
		printf("This is a right triangle");
	}else{
		printf("This is Not a right triangle");
	}
}

int isRightTriangle(float a, float b, float c){
	float is;
	if(a + b > c && a + c > b && b + c > a){
		if((a*a) + (b*b) == (c*c) && (a*a) + (c*c) == (b*b) && (b*b) + (c*c) == (a*a)){
			return 1;
		}
		return 1;
	}else{
		return 0;
	}
}
