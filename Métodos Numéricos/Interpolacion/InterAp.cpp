#include <stdio.h>
#include <stdlib.h>

main(){
	int n;
	float **A,h,Xk,k=0,yK=0;
	
	printf("Dame el tamano de tu arreglo.");
	scanf("%i", &n);
	A=(float**)malloc(n*sizeof(float*));
	for(int i=0; i<n; i++){
		A[i]=(float*)malloc(n*sizeof(float));
	}
	printf("\nIngresa el valor inicial de x:");
	scanf("%f", &A[0][0]);
	printf("\nIngresa el valor incremento en x:");
	scanf("%f", &h);
	
	for(int i=0;i<n;i++){
		A[i+1][0]=A[i][0]+h;
		printf("Dame to y[%i]: ", i);
		scanf("%f",&A[0][i]);
		
	}
	printf("\nDame Xk: ");
	scanf("%f", &Xk);
	for(int i =0; i<n;i++){
		if(Xk>A[i][0]&&Xk<A[i+1][0]){
		k=(Xk-A[i][0])/h;
		yK=A[0][i]+k*(A[0][i+1]-A[0][i])*k*(k-1)*((A[0][i+2]-A[0][i+1])-(A[0][i+1]-A[0][i]))/2;
		}
	}
	printf("\n\nEl valor interpolado es: %f", &yK);
		
}
