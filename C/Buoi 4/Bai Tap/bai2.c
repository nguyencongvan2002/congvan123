#include <stdio.h>

int main(void){
	int a, b;
	printf("Enter a number: ");
	scanf("%d", &a);
	while (a>=0) {
		printf("Enter a number: ");
		scanf("%d", &a);
		if (b<a) {
			b = a;
		}
	}
	printf("The maximum number is %d", b);	
}
