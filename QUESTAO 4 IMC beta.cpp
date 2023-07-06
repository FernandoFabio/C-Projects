#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

float somar(float peso, float altura)
{
	 return (peso/(altura*altura));

}


main ()
{
  //inicio
  
 
   
    printf("   Bem vindo a descoberta de IMC\n ");
	printf(" \n");
	system("pause");
	system("cls");
	// variaveis
	
float peso,altura,resultado,imc;
char continuar;
int soma, imc_pessoas, qimc;
int contador;              
contador=1;  

do {
	
cout << contador << endl; 
    contador++; 
    
    printf("contador eh %d", contador);
    printf("Digite seu Altura (em METROS) ");
    scanf("%f", &altura);
    printf("Digite seu Peso (EM KILOS)");
    scanf("%f", &peso);
   


if 
(imc= somar(peso, altura));    {
printf ("\nO Seu IMC e: %.1f\n\n",imc);

     if (imc<=18.49)
	 printf("Subnutrido\n");
	 else
	   if (imc>=18.5 && imc<=24.99)
	   printf("Peso Saudavel\n"); 
	   else
	     if (imc>=25 && imc<=29.99)
	      printf("Sobrepeso\n"); 
	      else
	         if (imc>=30 && imc<=34.99)
	         printf("Obesidade Grau I\n");
	          else
	             if (imc>=35 && imc<=39.99)
	            printf("Obesidade Grau II\n");
	            else 
	              if (imc>40)
	               printf("Obesidade Grau III\n");
	               
	               }
	               
     		
				printf(" \n");
        printf(" Deseja Continuar a calcular seu imc ? (s/n) Use somente s ou n minusculo! ");
        setbuf(stdin, NULL);
        scanf(" %c", &continuar);
        system("cls");
				
   	}while(continuar == 's');
   		
	                
      system ("pause"); 
    }
