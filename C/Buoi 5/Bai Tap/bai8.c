#include <stdio.h>

void printMenu();
void toContinue();
int main(void){
	printMenu();
	int a;
	char b;
	int stop = 1;
	
	do{
		
		do{
			printf("\nPlease enter your selection:");
			scanf("%d", &a);
		}while(a < 1 || a > 7);
		
		printf("\nYou have selected = %d", a);
		
		if(a == 7){
			exit(0);
		}
		
		toContinue();
		
		printf("\nPlease enter your selection:");
		scanf("%c", &b);
		
		switch(b){
			case 'y':
			case 'Y':
				// chay lai tu dau
				stop = 0;
				break;
			case 'n':
			case 'N':
				// thoat khoi chuong trinh
				exit(0); 
				break;
			case 'c':
			case 'C':
				// xoa man hinh
				system("cls");
				break;
			default:
				break;
		}
	
	}while(stop == 0);
}
void printMenu(){
	printf("+-----------------------------------------------------+");
	printf("\n|              EMPLOYEE MANAMEGENT PROGRAM            |");
	printf("\n+-----------------------------------------------------+");
	printf("\n|1:input|2:sort|3:Analyze|4:find|5:save|6:open|7:exit |");
	printf("\n+-----------------------------------------------------+");	
}

void toContinue(){
	printf("\nDo You To Continue ?");
	printf("\nYes, I do. (press 'y', 'Y')");
	printf("\nNO, I don't. (press 'n', 'N')");
	printf("\nPlease clear the screen ! (press 'c', 'C')");
}
