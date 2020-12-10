#include <stdio.h>

int main(void){
	char a[10], s[10], d[10];
	int cmp1, cmp2, cmp3;
	printf("Please enter the first lowercase string: ");
	scanf("%s", a);
	printf("\nPlease enter the first lowercase string: ");
	scanf("%s", s);
	printf("\nPlease enter the third lowercase string: ");
	scanf("%s", d);
	
	cmp1 = strcmp(a, s);
	cmp2 = strcmp(a, d);
	cmp3 = strcmp(s, d);
	
	if((a < s) && (s < d)){	
	printf("The first string is: %s" ,a);
	printf("\nThe last string is: %s" ,d);
		} else if((a < s) && (s > d)){
			printf("The first string is: %s" ,a);
			printf("\nThe last string is: %s" ,s);
		} else if((s < a) && (a < d)){
			printf("The first string is: %s" ,s);
			printf("\nThe last string is: %s" ,d);
		} else if((s < a) && (a > d)){
			printf("The first string is: %s" ,s);
			printf("\nThe last string is: %s" ,a);
		} else if((d < a) && (a < s)){
			printf("The first string is: %s" ,d);
			printf("\nThe last string is: %s" ,s);
		} else if((a < a) && (a > s)){
			printf("The first string is: %s" ,d);
			printf("\nThe last string is: %s" ,a);
	}	
}
