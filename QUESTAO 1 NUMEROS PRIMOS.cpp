#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <conio.c>
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
	
 int num, primo;
 

// Titulo //

    system ("color 3e");
    system("title Atividade ");
    printf("   Bem vindo a descoberta de numeros primos\n ");
	printf(" \n");
	system("pause");
	system("cls");
	
// INICIO DO LOOP //

  // digitar o numero //
 printf("\nDigite um numero: "); 
scanf("%d",&num);

primo = funcPrimo(num);

 if (primo == 1)
    printf("\nO nucmero %d e primo.\n", num );
    else
    printf("O nucmero %d n e primo.", num );
    
    
    printf("\n\n\n");
    
    system("pause"); 
 
 	
}


       



