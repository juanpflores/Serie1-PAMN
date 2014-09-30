
#include <stdio.h>
#include <stdlib.h>

main(){
	FILE *PRINT;
	PRINT=fopen("resultados.xls", "w");
	
	
	if(PRINT==NULL)
		printf("Error 404 archivo no encontrado\n");
	
	else{
		int n;
		printf("Escribe el numero de filas que tienes en las columnas:");
		scanf("%d", &n);
		
		float *x,*y, xi, num=0,den=0, yi=0;
		
		x=(float*)malloc(n*sizeof(float));
		y=(float*)malloc(n*sizeof(float));
		
		fprintf(PRINT,"x\ty\n");
		for(int i=0;i<n;i++){
			printf("Ingresa el valor de x[%d]",i+1);
			scanf("%f", &x[i]);	
	
			
			printf("Ingresa el valor de y[%d]", i+1);
			scanf("%f", &y[i]);
			fprintf(PRINT, "%f\t%f\n", x[i],y[i]);		
		}
		
		do{
			printf("Para que valor de X?\n");
			scanf("%f", &xi);
			
		}while(xi<x[0] ||xi>x[n]);
		
		for(int i=0;i<n;i++){
			num=1;
			den=1;
			
			for(int j=0;j<n;j++){
				if(i!=j){
					num=num*(xi-x[j]);
					den=den*(x[i]-x[j]);
				}
			}
			
			yi=yi+(num/den)*y[i];
		}
		fprintf(PRINT,"%f",yi);
		
	}
	
	system("PAUSE");
	
	
}
