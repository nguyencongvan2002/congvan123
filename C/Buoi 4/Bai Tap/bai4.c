#include <stdio.h>
  int main(void) {
    int a, b = 0, c = 0, maximum, minimum;
    double avg;
    printf("Enter a positive integer:\n");
    scanf("%d", &a);
    while (a > 0) {
      c+= a;
      b++;
      
      if(a > maximum){
      	maximum = a;
	  }else{
	  	maximum = maximum;
	  }
	    
      if(a < minimum){
      	minimum = a;
	  }else{
	  	minimum = minimum;
	  }
      printf("Enter a positive integer:\n");
      scanf("%d", &a);
    }
    avg = c / (double) b;
    printf("Number of positive values entered is %d\n", b);
    printf("Maximum value entered is %d\n", maximum);
    printf("Minimum value entered is %d\n", minimum);
    printf("Average value is %lf\n", avg);
  }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
