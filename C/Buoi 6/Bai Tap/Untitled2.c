#include <stdio.h>
void cong(int,int,int *sum);
int main(void){
	int sum;
	
	cong(10,2,&sum);
	
	printf("%d", sum);
}

void cong(int a, int b,int *sum){
	*sum = a + b;
}
