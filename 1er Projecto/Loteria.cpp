#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Max 3

main()
{
	int Ganados=0, Perdidos=0;
	int Tab1[Max][Max], Tab2[Max][Max], Tab3[Max][Max], i, j, Usuario[Max][Max], Cpu1[Max][Max], Cpu2[Max][Max], REPETIDOS[54]={0}, Fin[Max][Max]={0};
	int final = 0;
	char ELECCION;
	 srand((time(NULL) + 1));
	    for (i=0;i<Max;i++)
	    {
	        for (j=0;j<Max;j++)
	           Tab1[i][j]=rand()%57+1;
	    }
	    srand((time(NULL) + 2));
	    for (i=0;i<Max;i++)
	    {
	        for (j=0;j<Max;j++)
	           Tab2[i][j]=rand()%57+1;
	    }
	        	srand((time(NULL) + 3));
	        	    for (i=0;i<Max;i++)
	        	    {
	        	        for (j=0;j<Max;j++)
	        	            Tab3[i][j]=rand()%57+1;
	        	    }

	printf ("\n\tBienvenido al juego de la loteria.\n\tIngresa tus datos:");
	printf ("\n\tEstas son las tarjetas disponibles:\n\n");
	printf ("\n\tTarjeta 1\n\n");
	for(i=0; i<Max; i++)
	{
		for(j=0; j<Max; j++)
			printf ("\t%d", Tab1[i][j]);
		printf ("\n");
	}
	printf ("\n\tTarjeta 2\n\n");
	for(i=0; i<Max; i++)
	{
		for(j=0; j<Max; j++)
			printf ("\t%d", Tab2[i][j]);
		printf ("\n");
	}
	printf ("\n\tTarjeta 3\n\n");
	for(i=0; i<Max; i++)
	{
		for(j=0; j<Max; j++)
			printf ("\t%d", Tab3[i][j]);
		printf ("\n");
	}
	printf ("\n\tElige la tarjeta con la que deseas jugar 1, 2 o 3: ");
	scanf ("%c", &ELECCION);
	switch (ELECCION)
	{
	case'1':
		for (i=0; i<Max; i++)
			for (j=0; j<Max; j++)
			{
				Usuario[i][j]=Tab1[i][j];
				Cpu1[i][j]=Tab2[i][j];
				Cpu2[i][j]=Tab3[i][j];
			}
		break;
	case'2':
		for (i=0; i<Max; i++)
			for (j=0; j<Max; j++)
			{
				Usuario[i][j]=Tab2[i][j];
				Cpu1[i][j]=Tab1[i][j];
				Cpu2[i][j]=Tab3[i][j];
			}
		break;
	case'3':
		for (i=0; i<Max; i++)
			for (j=0; j<Max; j++)
			{
				Usuario[i][j]=Tab3[i][j];
				Cpu1[i][j]=Tab1[i][j];
				Cpu2[i][j]=Tab2[i][j];
			}
		break;
	}
	printf("\n\tTu tarjeta es:\n\n");
	for(i=0; i<Max; i++)
	{
		for(j=0; j<Max; j++)
			printf ("\t%d", Usuario[i][j]);
		printf ("\n");
	}
	printf("\n\tComienza el juego\n\n");
	int K=0;

	do
	{
		int A=0;
		A=rand()%54+1;
		REPETIDOS[K]=A;
		printf("El numero es: %d\n\n",A);
		for (i=0; i<Max; i++)
			for (j=0; j<Max; j++)
			{
				if (Usuario[i][j]==A)
					Usuario[i][j]=0;
				if (Cpu1[i][j]==A)
					Cpu2[i][j]=0;
				if (Cpu1[i][j]==A)
					Cpu2[i][j]=0;
			}
		for(i=0; i<Max; i++)
		{
			for(j=0; j<Max; j++)
				printf ("\t%d", Usuario[i][j]);
			printf ("\n");
		}
		printf("\n\n");
		for(i=0; i<Max; i++)
		{
			for(j=0; j<Max; j++)
				printf ("\t%d", Cpu1[i][j]);
			printf ("\n");
		}
		printf("\n\n");
		for(i=0; i<Max; i++)
		{
			for(j=0; j<Max; j++)
				printf ("\t%d", Cpu2[i][j]);
			printf ("\n");
		}
		printf("\n\n");
		system("Pause");
		if(memcmp(Usuario, Fin, sizeof(Usuario)) == 0)
		{
			printf("\t\t¡¡¡FELICIDADES GANASTE!!!\n");
			final = 1;
			Ganados++;

		}
		if(memcmp(Cpu1, Fin, sizeof(Usuario)) == 0)
		{
			printf("\t\tGANO EL CPU 2\n");
			final = 1;
			Perdidos++;
		}
		if(memcmp(Cpu2, Fin, sizeof(Usuario)) == 0)
		{
			printf("\t\tGANO EL CPU 3\n");
			final = 1;
			Perdidos++;
		}
	}
	while(final == 0);
	system("PAUSE");
}
