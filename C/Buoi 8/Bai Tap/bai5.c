#include <stdio.h>

int isPalindrome(char str[]);
int main(void){
	char str[20];
	printf("Enter word: ");
	gets(str);
	
	int is = isPalindrome(str);
	if(is == 1){
		printf("%s is a palindrome", str);
	}else{
		printf("%s is not a palindrome",str);
	}
}

int isPalindrome(char str[]){
	int i;
	str = strlwr(str);
	for(i = 0; i < strlen(str); i++){
		int j = strlen(str) - 1 - i;
		if(j > i){
			if(str[i] != str[j]){
				return 0;
			}
		}else{
			return 1;
		}
	}
	return 1;
}
