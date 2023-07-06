#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

#include <math.h>
int mdc(int a,int b)
{
if(b == 0) return a;
else
return mdc(b,a%b);

}

int main()

{
	//inicio
  
   
  
    printf("   Bem vindo a descoberta de MDC\n ");
	printf(" \n");
	system("pause");
	system("cls");
	// variaveis
	
int a,b;

do {


 printf("\n Digite um numero \n ");
    scanf("%d", &a);
  printf("Digite outro numero\n ");
    scanf("%d", &b);
    
printf("\n MDC => %i\n",mdc(a,b));


}while (a<b);

	system("pause");}
