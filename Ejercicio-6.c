#include<stdio.h>
#include<stdlib.h>

main(){
       FILE *ap;
       ap=fopen("datos.txt","r");
       char s;
       int pal=0,car=0,voc=0,con=0,esp=0;
       if(ap==NULL)
       printf("ERROR");
       
       else{
            while(feof(ap)==NULL){
               s=fgetc(ap);
               
               if(s==' '||s=='\t'||s=='\n'||s==EOF)
               pal++;
               
               else{
               car++;
                     if(s=='\n')
                     esp++;
                     else if(s=='%c',32) 
                         voc++;
                  
                }
               }
               
               printf("El numero de palabras es: %d\n",pal);
               printf("El numero de caracteres es: %d\n",car);
               printf("El numero de espacios es: %d\n",voc);
               printf("El numero de saltos de linea es: %d\n",esp);

            }
     system("PAUSE");
       }
