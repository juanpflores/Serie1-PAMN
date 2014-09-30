#include <stdio.h>
#include <stdlib.h>

float newton (int, float*, float*, float);
main(){
	int n;
	printf("Escribe el tamano de tu arreglo: ");
	scanf("%d", &n);
	
	float y[n],x[n],xi,yi=0;
	
	for(int i=0;i<n;i++){
		printf("Ingresa el valor de X[%d]: ", i);
		scanf("%f", &x[i]);
		printf("Ingresa el valor de Y[%d]: ", i);
		scanf("%f", &y[i]);
	}
	printf("A que numero quieres interpolar? \n");
	scanf("%f", &xi);
	
	yi=newton(n,x,y,xi);
	printf("\n El valor interpolado es: %f", yi);
	
	system("PAUSE");
}

float newton(int n, float *x, float *y, float xi){
	float b[n][n];
	float xt; //terminos del polinomio
	float yi; // valor interpolado
	
	//Comenzamos la tabla de diferencias.
	for(int i=0; i<n;i++){
		b[i][0]=y[i];
	}
	//tabla de diferencias
	for(int j=1;j<n;j++){
		for(int i=0;i<n;i++)
		b[i][j]=(b[i+1][j-1]-b[i][j-1])/(x[i+j]-x[i]);
	}
	//interpolamos el polinomio.
	xt=1;
	yi=b[0][0];
	for(int j=0;j<n-1;j++){
		xt=xt*(xi-x[j]);
		yi=yi+b[0][j+1]*xt;
	}
	
	
	return yi;
}
