#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>


float media1(float av1, float av2)
{
	 return (av1*3 + av2*4)/7;
	 
	 }
	 
	 
	 float finale(float av1, float av2)
{
	 return (50 - (av1*3 + av2*4)) /3;
	 
	 }

int main()
{
     //inicio
  
  
  
    printf("   Bem vindo a Notas de aulas\n ");
	printf(" \n");
	system("pause");
	system("cls");
	
	//variaveis 
	
int qalunos,contador,maior = 0,menor = 0,nota;
float av1, av2, av3;
float media,resultado;
float precisaNaFinal;
 float media_turma =0,acum=0;
 float medida;
 float soma;

 printf("Seja bem vindo.\n\nPor favor, digite a quantidade de alunos que existem na sala:  ");
  scanf("%d", &qalunos);
  system("cls");
  
  
 for(contador = 0; contador != qalunos; contador++){
  	printf("\nDigite nota AV1: ");
	scanf("%f", &av1);	
	printf("\nDigite nota AV2: ");
	scanf("%f", &av2);
	
	system("cls");
	
	media = media1(av1, av2);
	if (media >= 7)

	{
	
		printf("\nAprovado. Media: %.2f\n\n", media);	
		
	
	}
		else {
		
		precisaNaFinal = finale(av1, av2);
			printf("\nVai pra final precisando de: %.2f\n\n", precisaNaFinal);	
			printf("\nQuanto tirou na AV3? \n\n");
			scanf("%f", &av3);
			if (av3 >= precisaNaFinal)
				printf("\nAprovado.");	
				else	
				printf("\nReprovado.");
			media = (av1*3 + av2*4 + av3*3)/10;
			printf("\nMedia: %.2f\n", media);
				
			}
			media++;
			soma += media; 
				media_turma = (soma/qalunos)-1;
				printf("Media da turma com as notas digitadas = %.1f\n \n",media_turma);
			
	}
		
	}
