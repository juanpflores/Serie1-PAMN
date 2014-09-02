#include <stdlib.h>
#include <stdio.h>

void main(){
	FILE *ap;
	char cuateBuscado, c;
	ap=fopen("cuates.txt","r");

	if (ap==NULL)
		printf("Error 404\n");

	else{
		printf("Escribe el nombre de tu cuate\n");
		scanf("%s", &cuateBuscado);
		while(feof(ap)==NULL){
			fgets(c,100,ap);
			if (c==cuateBuscado){
				
				printf("Nombre: %s\n",c );
				fgets(c,100,ap);
				printf("Edad: %s\n",c );
				fgets(c,100,ap);
				printf("Celular: %s\n",c );
				fgets(c,100,ap);
				printf("Facultad: %s\n",c );
				
				
			}

		}
	}

	free(ap);
	system("PAUSE");
}
	
