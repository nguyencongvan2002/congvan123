#include <stdio.h>

void rearrange(char word[]);

int main(void){
	char word[100];
	printf("A word: ");
	gets(word);
	rearrange(word);
}

void rearrange(char word[]){
	int i;
	char nguyen_am[20];
	char phu_am[20];
	int length = strlen(word);
	
	for(i = 0; i < length; i++){
		switch(word[i]){
			case 'u':
			case 'e':
			case 'o':
			case 'a':
			case 'i':
				strcat(nguyen_am, word[i]);
				puts(nguyen_am); 
				break;
			default:
				strcat(phu_am, word[i]);
				printf("\nphu_am = %s", phu_am); 
				break;
		}
	}
	
	strcat(nguyen_am, phu_am);
	printf("Rearranged word: %s", nguyen_am); 
}
