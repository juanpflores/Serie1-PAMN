
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
	
	char string[100];
	int size;
	printf("Ingresa la palabra.\n");
	scanf("%s", &string);
	size=strlen(string);

	for (int i = 0; i < size; ++i){
		if (string[i]==string[size-i]){
			/* code */
		}
		else{
			printf("No es palindromo\n");
			break;
		}
	}

}