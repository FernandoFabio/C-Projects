#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>


float tabela()
{
	 return printf("      [menu]   [  menu   ]   [ menu ]\n\n      [  1   ] [Ler um vetor numérico de 5 posições.]   \n      [  2   ]   [Imprimir o vetor.]  \n      [  3   ]   [Ordenar o vetor em ordem crescente.]   \n      [  4  ]   [ Sair. ] \n\n ");
 
	 }
	 
	 
main()
{
   
  
    system("title Atividade ");
    printf("   Bem vindo \n ");
	printf(" \n");
	system("pause");
	system("cls");
 float tabela1,codigo;
 int i,numeros[i];
	char continuar;
	int aux;
	
printf("       Ola bem vindo ao menu\n\n");

 
 do {
      
        tabela1=tabela();
        printf("     OQUE VOCE DESEJA, DIGITE O CODIGO ");
        scanf("%f", &codigo);
        if (codigo == 1)
         {
         	int i;
          	printf("Informe 5 numeros: \n");
 	        for(i = 0; i<5; i++)
	{
		scanf("%d", &numeros[i]);
	}
		 } else 
		 if (codigo == 2)
         {
         	printf("\n %d", numeros[i]);
         
		 } else
		 if (codigo == 3);
         {
           for(i=0;i<5;i++)
          if(numeros[i] > numeros[i +1]){
		 aux = numeros[i];   
		 numeros[i] = numeros[i + 1];
	   numeros[i + 1] = numeros[i];
		 }  else
		 if (codigo == 4)
         {
         		   printf(" \n");
           printf(" Deseja Continuar a comprar? (s/n) Use somente s ou n minusculo! ");
           setbuf(stdin, NULL);
           scanf(" %c", &continuar);
            system("cls");
            
		 }
		 


}
}while(continuar == 's');
	}

	
	
	
