#include <stdio.h> 
#include <stdlib.h> 
#define N 4 

void lerMatriz(int matriz[][4])
{
	int diagonal,aux=0;
	int i, j;
	printf("Informe os valores: \n");
	for (i=0; i<4; i++) {
        for (j=0; j<4; j++)
		{
   	  		printf("Escreva o valor de [%d, %d]:", i, j);
	      	scanf("%d", &matriz[i][j]);
	      	if (i == j)
	      	aux = diagonal += matriz[i][j]; 
	      
        } 
        	
    }
            printf("\n\n Soma da diagonal principal:\n\n"); 
         	printf( " Resultado: %d\n\n\n",aux); 
} 

void imprimirMatriz(int matriz[][4])
{
	int i, j;
	printf("\n Impressao da matriz: \n"); 
	for (i=0; i<4; i++) {
           for (j=0; j<4; j++) 
		   {
   	  			printf("%d	", matriz[i][j]); 
           }
           printf("\n");
	}
}


int main() 
{ 

    int i, j,aux; 
 	int matriz[4] [4],diagonal[N];
 	
    lerMatriz(matriz);
    imprimirMatriz(matriz);


system("PAUSE"); 
return 0; 
} 


