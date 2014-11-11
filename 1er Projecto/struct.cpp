
#include<stdio.h>
#include<stdlib.h>

struct Usuarios{

char nombre [25];
int edad;
int juegos;


};
void imp(struct Usuarios B[],int n);
Usuarios *read(Usuarios B[],int n);

main(){

int i,n;
char s;

printf("Cuantos usuarios registrara: ");
scanf("%d", &n);


struct Usuarios A[n];

read(A,n);
for(i=0;i<n;i++){
    printf("\nDame el nombre del Usuario %d: ",i+1);
    scanf("%s",&A[i].nombre);
    printf("\nDame la edad del Usuario %d: ",i+1);
    scanf("%d",&A[i].edad);
    printf("\nDame el numero de juegos del Usuario %d: ",i+1);
    scanf("%d",&A[i].juegos);
}
imp(A,n);

system("PAUSE");
}
//}
void imp(struct Usuarios B[],int n){
    int i;
    FILE *ap;
    ap=fopen("REGISTRO.txt","w+");
       if(ap==NULL)
       printf("ERROR");

       else{

        for(i=0;i<n;i++)
        fprintf(ap,"%s\t%d\t%d \n",B[i].nombre,B[i].edad,B[i].juegos);
        fclose(ap);
       }
}
Usuarios *read(struct Usuarios B[], int n){
	FILE *ap;
	ap=fopen ("Registro.txt","r");
	if(ap==NULL)
		printf("ERROR");
	else{
		int i =0;
		while (feof(ap)!=NULL)
		fscanf(ap,"%s\t%d\t%d", &B[i].nombre, &B[i].edad, & B[i].juegos);
		printf("%s %d %d \n",B[i].nombre,B[i].edad,B[i].juegos);
		i++;
	}
	return B;
}

