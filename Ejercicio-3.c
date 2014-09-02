#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE ap*;
	int n,m;
	ap=fopen("prueba.txt","r");

	if (ap==NULL){
		printf("Error 404\n");
	}
	else{

	printf("Cuantas Columnas?\n");
	scanf("%d",&n);
	printf("Cuantas filas?\n");
	scanf("%d",&m);

	float matriz[n][m];

	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			printf("Ingresa el valor de A[%d][%d]\n",i,j );
			scanf("%f",A[i][j]);
		}
	}

		fscanf(ap,c);

	}
	
}