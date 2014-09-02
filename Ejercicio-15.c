#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main(){
	FILE *ap;
	char c;
	int ContPalabras=1, ContEspacios=0; ContLetras=0;
	ap=fopen("Texto.txt","r");	

	if (ap==NULL){
		printf("Error 404\n");
	}
	else{
		 while ((c = fgetc(ap)) != EOF){
				if (c!=' '){
					ContLetras++;
				}
				else{
					ContEspacios++;
					ContPalabras++;

				}

		}

	}
	printf("Letras: %d\n", &ContLetras );
	printf("Palabras: %d\n", &ContPalabras );
	printf("Espacios: %d\n", &ContEspacios );
	system("PAUSE");
}
	
