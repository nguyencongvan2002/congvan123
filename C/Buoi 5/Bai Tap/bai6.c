#include <stdio.h>

int getMagic(int);

int main(void){
	int a;
	printf("\nEnter 1st value: ");
	scanf("%d", &a);
	getMagic(a);
	printf("\nEnter 2nd value: ");
	scanf("%d", &a);
	getMagic(a);
}

int getMagic(int a){
	int adv,ac,an;
	adv = a%10;
	ac = a/100%10;
	an = a/10000%10;
	int Mn = (adv + ac + an)%10;
	printf("\nMagic number = %d", Mn);
}

