#include <stdio.h>

int main(void){
	int a;
	int* a_ptr; 
	a_ptr = &a;
		printf("Enter a number: ");
		scanf("%d", &a);
	while(a_ptr >= 0){
		printf("Enter a number: ");
		scanf("%d", &a);
	}
}
