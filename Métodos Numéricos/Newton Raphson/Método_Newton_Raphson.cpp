#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* El método Newton Raphson sólo funciona con fuinciones convergentes ya que se le considera un método abierto. Se necesita concer la
derviada de la funcion. El método utiliza la tangente de la recta que fomra la función para calcular la función que buscamos.

Codigo por: Juan P. Flores
*/

	float f(float x);
	float df(float x);

main(){
	float tol,e,xi;
	/*	tol	Tolerancia
		e	Error
		xi	Valor Inicial */
	int iteraciones=0;
	
	printf("\nIngresa el valor inicial: ");
	scanf("%f", &xi);
	printf("\nIngresa la tolerancia: ");
	scanf("%f", &tol);
	
	
	printf("\n\tIteracion\tXi\tError");
	
	//Iniciamos con Método Newton-Raphson.
	do{
		printf("\n\t%.1d\t\t%.3f\t%.3f",iteraciones,xi,e);
		iteraciones++;
		xi=xi-(f(xi)/df(xi));
		e= abs(f(xi));
		
	}while(e>tol);
	
	printf("\n\nLa raiz es:\t%f",xi);
	system("PAUSE");
}

float f(float x){
	float res;
	res=pow(x,2)-1;
	return res;
}
float df(float x){
 	return 2*x;
}
