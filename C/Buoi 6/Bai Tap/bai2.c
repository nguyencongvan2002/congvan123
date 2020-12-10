#include <stdio.h>

int main(void){
	int a, *a_ptr;
	int sum = 0, *sum_ptr;
	a_ptr = &a;
	sum_ptr = &sum;
	for(a = 9; a < 300; a++){
		if(a%7 == 0 && a%63!= 0){
			*sum_ptr += a;
			printf("%5d", a);
		}
	}
	printf("\n\nSum of integers between 9 & 300 that are divisible by 7 but not by 63 is : %d \n",*sum_ptr);
}
