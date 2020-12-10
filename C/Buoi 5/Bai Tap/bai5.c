#include <stdio.h>

int getSmallest(int, int, int);
int main(void){
	int a,b,c, minimum;
	printf("Enter 3 integers: ");
	scanf("%d %d %d", &a, &b, &c);
	while(a < b && b < c){
		minimum = getSmallest(a,b,c);
		printf("\ngetSmallest = %d", minimum);
		printf("\nEnter 3 integers: ");
		scanf("%d %d %d", &a, &b, &c);
	}
}

int getSmallest(int a, int b, int c){
	if(a != b && b != c){
		return a;
	}
	if(a != b && b != c){
		return b;
	}
	if(a != b && b != c){
		return c;
	}
	
}

