#include <stdlib.h>
#include <stdio.h>
#include <time.h>
//#include <math.h> //Para la funcion random
/*
	Primer Projecto de PAMN
	
	Equipo:
	-Juan Pablo Flores 
*/
int random();

	main(){
	//Declaracion de variables
	FILE *PRINT;
	int *numaleatorios;
	numaleatorios=(int*)malloc(100*sizeof(int));
	
	PRINT=fopen("resultados.xls", "w");
	char nombre[10];
	int numeros[2],solucion=0,confirm=0;
	
	
	//Inicio del programa
	printf("Bienvenido a Juego \n Ingresa tu nombre:");
	scanf("%d", &nombre);
	printf("Escoge tres numeros");
	
	for(int i=0; i<2; i++){
		printf("Escribe que numero entre 1 y 100 quieres para tu numero "+(i+1));
		scanf("%d",&numeros[i]);
	}
	
	//Iniciamos a poner los numeros aleatorios.
	for(int i=0; i<100||solucion>3;i++){
		numaleatorios[i]=random();
		fflush(stdin);
		printf("Tu numero es el siguiente? %d\t\t\t si(1)\tno(0) ", numaleatorios[i]);
		scanf(" %d", &confirm);
		if(confirm==1){
			for(int j =0;j<2;j++){
				//if(numeros[j]==numaleatorio[i]){
					
			//	}
			}
		}
		
	}	
}

int random(){
	int number, input;
		
		srand ( time(NULL) );
		number = rand() % 100 + 1;
		return number;
}
