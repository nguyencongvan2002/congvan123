#include <stdio.h>

int main(void){
	char character;
	printf("Enter an character: ");
	scanf("%c", &character);
	switch (character) {
	case 'm':
	case 'M':
		printf("monday");
		break;
	case 't':
	case 'T':
		printf("tusday");
		break;
	case 'w':
	case 'W':
		printf("wednesday");
		break;
	case 'h':
	case 'H':
		printf("thursday");
		break;
	case 'f':
	case 'F':
		printf("friday");
		break;
	case 's':
	case 'S':
		printf("saturday");
		break;
	case 'u':
	case 'U':
		printf("sunday");
		break;
	}
}
