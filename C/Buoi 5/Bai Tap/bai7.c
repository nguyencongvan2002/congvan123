#include <stdio.h>

int containDigit7(int);
int sumWithout7(int);
int main(void){
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	
	int ket_qua = containDigit7(n);
	printf("containDigit7 : %d",ket_qua);
	
	int a = 1, sum = 0;
	while(a <= n){
		
		int x = containDigit7(a);
		
		if(x == 0){
			sum += a;	
		}
		a++;
	}
	printf("\nSum without 7 is: = %d", sum);
	
	int b, c;
	//b1: khai bao bien b
	printf("\nEnter b: ");
	scanf("%d", &b);
	//b2: khai bao bien c
	printf("Enter c: ");
	scanf("%d", &c);
	//b3: tinh tong b,c
	int v = b + c;
	//b4:kiem tra v co chua chu so 7 hay khong
	int r = containDigit7(v);
	//b5: in ra ket qua
	printf("\n%d", r);
	
		
	
}

int containDigit7(int n){
	
	while(n != 0){
		int m = n - 7;
		if(m % 10 == 0){
			// neu chu so hang don vi - 7 == 0 thi return 1;
			return 1;
		}
		
		// loai bo so hang don vi VD: XYZ / 10 = XY
		n = n / 10;	
	}
	
	return 0;
}                                                                                                                                                                                                                                  
