#include <stdlib.h>
#include <stdio.h>
#include<time.h>
#define Max 3


struct Usuarios{

char nombre [25];
int edad;
int ganados;
int perdidos;
int jugados;

};
void imp(struct Usuarios B[],int n);

main(){
int op;
int i,n;
char s;
struct Usuarios A[1];
printf("\t\tBienvenido al juego de la loteria\t\t\n");
printf("\t\tsi es la primera ves que juegas presiona '1'\n\t\tSi ya haz jugado preciona '2'\t\t\n");
scanf("%d",&op);
switch(op){
case 1:
    printf("\nDame el nombre del Usuario %d: ",i+1);
    scanf("%s",&A[i].nombre);
    printf("\nDame la edad del Usuario %d: ",i+1);
    scanf("%d",&A[i].edad);
imp(A,n);

break;
case 2:
	
    for(i=0;i<n;i++){
    	printf("%d.- %s", i,A[i].nombre);
    }

break;

}	

}
void imp(struct Usuarios B[],int n){
    int i;
    FILE *ap;
    ap=fopen("REGISTRO.txt","w");
       if(ap==NULL)
       printf("ERROR");

       else{

        for(i=0;i<n;i++)
        fprintf(ap,"%s_%d \n",B[i].nombre,B[i].edad);
        fclose(ap);
       }
}



