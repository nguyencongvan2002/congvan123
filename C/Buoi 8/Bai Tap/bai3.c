#include <stdio.h>

int charToInt(char c);
int main(void){
	char str[200];
    int i, sum = 0;
    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);
    for(i = 0; i < strlen(str); i++){
    	if(str[i] == ' '){
    		break;
		}
    	switch(str[i]){
    		case '1':
    		case '2':
    		case '3':
    		case '4':
    		case '5':
    		case '6':
    		case '7':
    		case '8':
    		case '9':
    			sum += charToInt(str[i]);
		}
	}
	printf("\nsum = %d", sum);
}

int charToInt(char c){
	return (int)c-48;
}
