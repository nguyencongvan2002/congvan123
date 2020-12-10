#include <stdio.h>

int main(void){
   int i, sum = 0;
   printf("Sum numbers between 9 and 300, divisible by 7: \n");
   for(i > 9 ; i<300 ; i++){  
     if(i%7 == 0 && i%63!= 0){
       printf("% 5d",i);
       sum+=i;
     }
   }
   printf("\n\nSum of integers between 9 & 300 that are divisible by 7 but not by 63 is : %d \n",sum);
}
