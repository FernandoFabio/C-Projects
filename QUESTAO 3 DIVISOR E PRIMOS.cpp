#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <conio.h>

//fernandofabio
// Variaveis //  

int funcPrimo(int a)
{
    int  i,  vezes = 0, valor;
    for (i = 1; i <= a && vezes <= 3; i++)               
   
    {    
        if (a % i == 0)
        vezes ++;
    }
    
    if (vezes == 2)
    {
     valor = 1;
    }
    else  
    {
     valor = 0;
    }
    
    return valor;
}

int main (void)

{
	
 int num, primo, N;
    int qtd=0; 
 

// Titulo //

   
  
    printf("   Bem vindo a descoberta de numeros primos e seus divisores\n ");
	printf(" \n");
	system("pause");
	system("cls");
	
// INICIO DO LOOP //

 printf("\nDigite um numero: "); 
scanf("%d",&num);

primo = funcPrimo(num);

 if (primo == 1)
    printf("\nO numero %d e primo. \nNao precisa amostrar divisores\n", num );
    else
     printf("Numero nao e primo\nE seus divisores sao \n"); 
    for (int i=1; i<=num; ++i){
          if ( num % i == 0) {
			 printf("%d\n",i); 
             qtd++;
          }
       } 
       
    
    
    printf("\n\n\n");
    
    system("pause"); 
 
 	
}

