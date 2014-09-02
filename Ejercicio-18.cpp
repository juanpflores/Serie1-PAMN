#include<stdio.h>
#include<stdlib.h>

struct trabajador{
       
       char nombre[30] ;
       float horas;
       char puesto[30];
             };
             
main(){
       int n;
       float sueldo=0,extra=0;
       printf("Cuantos trabajadores : ");
       scanf("%d",&n);
//       trabajador t[n];
         trabajador *t;
         t=(trabajador*)malloc(n*sizeof(trabajador));
         
         for(int i=0;i<n;i++){
         printf("Dame el nombre del trabajador %d",i+1);
         fflush(stdin);
         gets(t[i].nombre);
         printf("Puesto de %s",t[i].nombre)         ;
         fflush(stdin);
         gets(t[i].puesto);
         printf("Horas trabajadas de %s",t[i].nombre)         ;
         scanf("%f",&t[i].horas);
            
         if(t[i].puesto=="gerente")
         sueldo=1000;
         else          if(t[i].puesto=="supervisor")
         sueldo=900;
         else          if(t[i].puesto=="obrero")
         sueldo=500;
         else
         sueldo=200;
         
         if(t[i].horas>40&&t[i].horas<48)
         extra=(t[i].horas-40)*2*sueldo;
         else 
         extra=(t[i].horas-48)*3*sueldo;
         
       printf("el sueldo de %s es %f",t[i].nombre,sueldo+extra);
       extra=0;sueldo=0;       }
       system("PAUSE");}
