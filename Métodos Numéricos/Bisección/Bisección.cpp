# include <stdio.h>
# include <stdlib.h>
#include <math.h>

float f(float x);

main(){
	float tol,a,b,c,PM,MEP;
	//Tol = tolerancia; a=valor inicial del dominio; b=valor final del dominio; PM = Punto Medio; MEP=Maximo error posible.
	int iteraciones=0;
	
	printf("Ingresa tu punto inicial: \n ");
	scanf("%f", &a);
	printf("\nIngresa tu punto final: \n ");
	scanf("%f", &b);
	printf("\nIngresa tu punto tolerancia: \n ");
	scanf("%f", &tol);
		
	//Iniciamos con el método de Biseccion.
	
	MEP=(b-a)/2;
	printf("\nMáximo Error Posible: \t%f", &MEP);
	printf("\n\tIteracion\tValor A\tValor B\tMEP");
	
	do{
		c=(a+b)/2;
		if(f(a)*f(b)<0)
		b=c;
		else
		a=c;
		MEP=(b-a)/2;
		iteraciones++;
		
		printf("\n\t%.1d\t\t%.3f\t%.3f\t%.3f", iteraciones,a,b,MEP);
		
	}while(MEP>tol);
	
	printf("\n\nRaiz encontrada en el valor: %.3f\n",c);
	
	
	system("PAUSE");
}
float f(float x){
	int res;
	res=pow(x,10)-1;
	return res;
}

