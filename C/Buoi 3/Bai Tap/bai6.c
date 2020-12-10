#include <stdio.h>

int main(void){
	int a,b,c,n;
	printf("nhap 3 so nguyen duong n(co 3 chu so): ");
	scanf("%d %d %d", &a,&b,&c);
	a = a/100;
	b = b/100;
	c = c/100;
	printf("\nchu so hang tram: %d", a);
	printf("\nchu so hang tram: %d", b);
	printf("\nchu so hang tram: %d", c);
	if(a<b<c){
		printf("\nyes");
	}else{
		printf("\nNo");
	}
}
