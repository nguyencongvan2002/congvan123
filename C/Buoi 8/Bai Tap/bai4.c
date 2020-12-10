#include <stdio.h>

int countWords(char[] );
int main(void) {
    char str[200];
    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);
    
	int count = countWords(str);
	printf("\nWord count: %d", count);
}

int countWords(char str[]){
	int i, count = 0;
    int size = strlen(str);
    	if (str[0] != ' '){
         	count = 1;
    	}
    	for (i = 0; i < size-1; i++){
			if (str[i] == ' ' && str[i + 1] != ' '){
               	count++;
            }
        }
        return count;	
}
