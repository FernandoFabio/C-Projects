#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>

void oi(int *numeros)
{
   int i;
          	printf("Informe 5 numeros: \n");
 	        for(i = 0; i<5; i++)
 	        scanf("%d", &numeros[i]);
}

void sair()
{
    printf("Ja vai??? Nao! \n");
}


int main()
{
    int continuar=1;
    int numeros[5];
    int i;
    int aux;
    int j;

    do
    {
        printf("\n\tMenu\n\n");
        printf("1. Ler vetor de 5 numeros\n");
        printf("2. Imprimir vetor\n");
        printf("3. Ordenar ordem crescente\n");
        printf("4. Sair\n");

        scanf("%d", &continuar);
        system("cls");

        switch(continuar)
        {
            case 1:
                oi(numeros);
                break;

            case 2:
             for(i = 0; i<5; i++)
               printf("\n %d", numeros[i]);
                break;

            case 3:
            for (i=0;i<5; i++)
            for(j=i+1;j<5;j++)
{
            if (numeros[i]>numeros[j])
{
    aux= numeros[i];
    numeros[i]=numeros[j];
    numeros[j]=aux;
}
}
            for(i=0;i<5;i++)
            printf(" %d ",numeros[i]); 
	           
                break;

            case 4:
                break;

        }
                 printf(" Tem certeza ? (s/n) Use somente s ou n minusculo! ");
                  setbuf(stdin, NULL);
                  scanf(" %c", &continuar);
                   system("cls");
    } while(continuar == 'n');
}
