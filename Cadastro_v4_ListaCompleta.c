#include <stdio.h>
#include <stdlib.h>

#define tam 50

// ---- Estruturas para os tipos -------------------------------------------------------------------------------
typedef struct 							// Definicao da estrutura do registro
{										// Com definição do tipo (typedef)
	   int   Chave;
       int   Nivel;
       char  Nome[30];
       char  Personagem[30];
       float Experiencias;
}Registro;

typedef struct
{
	Registro cadastro[tam];
	int      ultimo;
}TipoLista;


// ---- Funções ligadas aos registros --------------------------------------------------------------------------
Registro LerRegistro()					// Ler os dados de um registro
{
    Registro r;

    printf("\n\n Digite a chave do Jogador : ");
    scanf("%d", &r.Chave);

    printf(" Digite o nivel do Jogador : ");
    scanf("%d", &r.Nivel);

    printf(" Digite o nome do Jogador : ");
    scanf("%s", &r.Nome);

    printf(" Digite o personagem do Jogador : ");
    scanf("%s", &r.Personagem);

    printf(" Digite o valor de experiências do Jogador : ");
    scanf("%f", &r.Experiencias);

    return r;          
}

void ImprimeRegistro(Registro r)		// Imprimir um registro
{
     printf(" Chave : %d \n", 	r.Chave);
     printf(" Nivel : %d \n", 	r.Nivel);
     printf(" Nome  : %s \n", 	r.Nome);
     printf(" Pers. : %s \n", 	r.Personagem);
     printf(" Exp.  : %.2f \n", r.Experiencias);
}

void ImprimeCadastro( Registro cad[], int ult)   // Imprimir o cadastro
{
   int i;
   for(i = 0; i<=ult; i++)
   {
         printf("\n Cad[%d] : \n", i );
         ImprimeRegistro(cad[i]);
         printf(" \n\n "); 
   }           
}

// ---- Funções básicas para o registro ------------------------------------------------------------------------
// int Igual(Registro pr1, Registro pr2) 
// int Maior(Registro pr1, Registro pr2) 
// int Menor(Registro pr1, Registro pr2) 


// ---- Funções do Tipo Abstrato Lista ------------------------------------------------------------------------
// ---- Inicializar e destruir/limpar a lista -----
void InicializarLista(TipoLista *pl)
{
	pl->ultimo = -1;	
}

void DestruirLista(TipoLista *pl)
{
	pl->ultimo = -1;	
}


// ---- Testes com a lista -----
int ListaCheia (TipoLista pl){

	return (pl.ultimo == (tam-1));

}

int ListaVazia (TipoLista pl)
{

	return (pl.ultimo == -1);
 
}


// ---- ... -----
int PesquisarPosicao(TipoLista pl, int pChave) 
{
	int i = 0, pos=-1;
	
	for (i=0; i<= pl.ultimo; i++)
	{
		if (pl.cadastro[i].Chave == pChave)
		{
			pos = i;
			i = pl.ultimo+1;
		}
	}
	return pos;	
}


// ---- Inserir dados na lista -----
void InserirListaFinal (TipoLista *pl, Registro pr)
{
	if (pl->ultimo<(tam-1))
	{
		pl->ultimo++;
		pl->cadastro[pl->ultimo] = pr;	
	}
	else
	{
		printf(" Lista cheia. ");
	}
}

void InserirListaInicio (TipoLista *pl, Registro pr)
{
	int i;	
	
	for(i = pl->ultimo; i>=0; i--)
	{
		pl->cadastro[i+1] = pl->cadastro[i];
	}
	
	pl->cadastro[0] = pr;
	pl->ultimo++;
}

void InserirListaPosicao (TipoLista *pl, Registro pr, int pp)
{
	int i;	
	
	for(i = pl->ultimo; i>=pp; i--)
	{
		pl->cadastro[i+1] = pl->cadastro[i];
	}
	
	pl->cadastro[pp] = pr;
	pl->ultimo++;
}


// ---- Retirar dados da lista -----
void RetirarListaFinal (TipoLista *pl)
{
	pl->ultimo--;
	pl->cadastro[pl->ultimo].Chave = -1;
}

void RetirarListaInicio (TipoLista *pl)
{

	int i;	
	
	for(i = 0; i<pl->ultimo; i++)
	{
		pl->cadastro[i] = pl->cadastro[i+1];
	}
	
	pl->ultimo--;

}

void RetirarListaPosicao (TipoLista *pl, int pp)
{
	int i;	
	
	for(i = pp; i<pl->ultimo; i++)
	{
		pl->cadastro[i] = pl->cadastro[i+1];
	}
	
	pl->ultimo--;
}


// ---- Visualizar Lista -----
void ImprimirLista(TipoLista pl)
{
	int i;
	Registro raux;
	
	for(i=0; i<=pl.ultimo; i++)
	{
		raux = pl.cadastro[i];	
		ImprimeRegistro(raux);
	}
}


// ---- Funções Uteis --------------------------------------------------------------------------
char Menu2()							// Menu com retorno da 
										// opcao selecionada
{
    char o;

    printf(" -- Menu -- \n");
    printf("  ( I ) Inserir \n");
    printf("  ( L ) Listar \n");
    printf("  ( S ) Sair \n");
    printf("-------------\n");
    printf("  ( 1 ) Inicializar Lista \n");
    printf("  ( 2 ) Destruir Lista \n");
    printf("  ( 3 ) Verificar Lista Cheia \n");
    printf("  ( 4 ) Verificar Lista Vazia \n");
    printf("  ( 5 ) Posicao do elemento na lista \n");
    printf("  ( 6 ) Inserir no final da Lista \n");
    printf("  ( 7 ) Inserir no inicio da Lista \n");
    printf("  ( 8 ) Inserir na posição da Lista \n");
    printf("  ( A ) Retirar no final da Lista \n");
    printf("  ( B ) Retirar no inicio da Lista \n");
    printf("  ( C ) Retirar na posicao da Lista \n");
    printf("\n  Opcao :  ");
    fflush(stdin);
    scanf("%c", &o);
    
    return o;    
}

main()
{
	char     opcao;
	TipoLista l;
	
	InicializarLista(&l);

    do
    {   opcao = Menu2();   
        switch(opcao)
        {
           case 'I': case 'i':
		             {
                        Registro raux;
                        raux = LerRegistro();
						
						InserirListaFinal(&l, raux);
                     } break;
           case 'l': case 'L': {
						ImprimirLista(l);
                     }break;
			case '1': {
					//void InicializarLista(TipoLista *pl)
					printf("Teste");
                    }break;
			case '2': {
					//void DestruirLista(TipoLista *pl)
                    }break;
			case '3': {
					int cheio = ListaCheia(l);
					if(cheio == 0){
						printf("A lista não está cheia\n");
					}else{
						printf("A lista está cheia\n");
					}
                    }break;	
			case '4': {
                    int teste;

                    teste = ListaVazia(l);

                    if (teste == 1)
                       printf(" Lista esta vazia ");
                    else
                       printf(" A lista possui elementos ");

                   }break;			
		    case '5': {
                        int chave;
                        printf(" Digite a chave ");
                        scanf("%d", &chave);
						
						int p = PesquisarPosicao(l, chave);
						
						printf(" Posicao = %d ", p);

                    }break;
			case '6': {
                        Registro raux;
                        raux = LerRegistro();
						
						InserirListaFinal(&l, raux);
                    }break;
			case '7': {
					//void InserirListaInicio (TipoLista *pl, Registro pr)
                    }break;
			case '8': {
                        Registro raux;
                        raux = LerRegistro();

						int p;
						printf(" Digite a posicao ");
						scanf("%d", &p);
						
						InserirListaPosicao(&l, raux, p);
	                }break;
			case '9': {
					//void InserirListaEmOrdem (TipoLista *pl, Registro pr)
                    }break;
			case 'A': {
					RetirarListaFinal (&l);
                    }break;
			case 'B': {
					//void RetirarListaInicio (TipoLista *pl)
                    }break;
			case 'C': {
					//void RetirarListaPosicao (TipoLista *pl, int pp)
                    }break;
			case 'D': {
					//void RetirarListaRegistro (TipoLista *pl, Registro pr)
                    }break;
			case 'E': {
					//void AlterarListaPosicao (TipoLista *pl, int pp)
                    }break;
           case 's':
           case 'S': printf(" Opcao SAIR    escolhida \n"); break;
           default : printf(" Opcao invalida. \n");
        }
        system("pause");
        system("cls");
    }    
    while( (opcao != 'S') && (opcao != 's') );
}
