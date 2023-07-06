 # include <stdlib.h>
 # include <stdio.h>

 //fernando fabio

 main(){

        int N;
        int qtd=0; 
      
      // Titulo //

    system ("color 3e");
    system("title Atividade ");
    printf("   Bem vindo a divisores de um numero\n ");
	printf(" \n");
	system("pause");
	system("cls");
	
      printf("N: ");
      scanf("%d",&N); 
      
      // Imprimi os divisores e obtêm a sua quantidade
      
      printf("\n\n"); 
      
      for (int i=1; i<=N; ++i){
          if ( N % i == 0) {
             printf("%d\n",i); 
             qtd++;
          }
       } 
       
	   }
       
