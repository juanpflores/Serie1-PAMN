# include <stdio.h>
# include <stdlib.h>
#include <math.h>

float f(float x);

main(){
	FILE *ap,*ap1;
	ap=fopen("datos.txt","r");
	ap1=fopen("resultados.xls","w");
	
	if(ap==NULL&&ap1==NULL)
		printf("\nError 404 documentos no encotrados!\n");
		
	else{
	
	
	float tol,a,b,c,PM,MEP;
	//Tol = tolerancia; a=valor inicial del dominio; b=valor final del dominio; PM = Punto Medio; MEP=Maximo error posible.
	int iteraciones=0;
	
	//Leemos los datos del archivo.
	fscanf(ap,"%f", &a);
	fscanf(ap,"%f", &b);
	fscanf(ap,"%f", &tol);
	
	//Flags
	//printf("\n\t %f \t %f \t %f ", a,b,tol);
		
	//Iniciamos con el método de Biseccion.
	
	MEP=(b-a)/2;
	fprintf(ap1,"\nMáximo Error Posible: \t%f", &MEP);
	fprintf(ap1,"\n\tIteracion\tValor A\tValor B\tMEP");

	
	do{
		c=(a+b)/2;
		if(f(a)*f(b)<0)
		b=c;
		else
		a=c;
		MEP=(b-a)/2;
		iteraciones++;
		
		fprintf(ap1,"\n\t%.1d\t%.3f\t%.3f\t%.3f", iteraciones,a,b,MEP);
		
	}while(MEP>tol);
	
	fprintf(ap1,"\n\nRaiz encontrada en el valor: %.3f\n",c);
	
}
	fclose(ap1);
	//free(ap);
	//free(ap1);
	system("PAUSE");
}
float f(float x){
	int res;
	res=pow(x,10)-1;
	return res;
}

