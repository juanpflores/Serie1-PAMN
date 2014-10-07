<stdlib.h>
<stdio.h>
<math.h> //Para la funcion random
/*
	Primer Projecto de PAMN
	
	Equipo:
	-Juan Pablo Flores 
*/
int random()

void main(){
	//Declaracion de variables
	FILE *PRINT;
	int *numaleatorios;
	numaleatorios=(int*)malloc(100*sizeof(int));
	
	PRINT=fopen("resultados.xls", "w");
	char nombre[10];
	int numeros[2];
	
	
	//Inicio del programa
	printf("Bienvenido a Juego \n Ingresa tu nombre:");
	scanf("%d", &nombre);
	printf("Escoge tres numeros");
	
	for(int i=0; i<2; i++){
		printf("Escribe que numero entre 1 y 100 quieres para tu numero "+(i+1))
		scanf("%d",&numero[i]);
	}
	
	//Iniciamos a poner los numeros aleatorios.
	
	
}

int random(){
	int number, input;
		
		srand ( time(NULL) );
		number = rand() % 100 + 1;
		return number;
}
