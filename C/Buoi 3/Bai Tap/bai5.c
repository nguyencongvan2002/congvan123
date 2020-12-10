#include <stdio.h>

int main(void){
	int a;
	printf("Enter value: ");
	scanf("%d", &a);
	if(a == 1){
		printf("%dst", a);
	}else if(a == 2){
		printf("%dnd", a);
	}else if (a == 3){
		printf("%drd", a);
	}else{
		printf("%dth", a);
	}
}
