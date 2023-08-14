#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#define N 10



int verificaOrdemCrescente (int n, int v[]);
int verificaOrdemDecrescente (int n, int v[]);
void geraVetorCrescente (int n, int v[]);
void geraVetorDecrescente (int n, int v[]);
void geraVetorAleatorio (int n, int v[]);
void imprimeVetor (int n, int v[]);
void ordenaInsercao (int n, int v[]);
void ordenaSelecao (int n, int v[]);
void ordenaBolha (int n, int v[]);
void ordenaMerge (int n, int v[]);
void ordenaShell (int n, int v[]);
void ordenaHeap (int n, int v[]);
void ordenaQuick (int n, int v[]);
int main(){
    setlocale(LC_ALL,"Portuguese");
    int V[N], Opcao;
    do
    {
        printf ("\t\tSelecione o método de ordenação:\n");
        printf ("\t\t\t1 - Método de Inserção Simples\n");
        printf ("\t\t\t2 - Método de Seleção Direta\n");
        printf ("\t\t\t3 - Método da Bolha\n");
        printf ("\t\t\t4 - Método Mergesort\n");
        printf ("\t\t\t5 - Método Shellsort\n");
        printf ("\t\t\t6 - Método Heapsort\n");
        printf ("\t\t\t7 - Método Quicksort\n");
        
        printf ("\t\t\tInforme o método:");
        scanf("%i",&Opcao);
        
    } while (Opcao < 0 & Opcao > 4);
    
    geraVetorAleatorio (N, V);
    printf("Vetor gerado:\n");
    imprimeVetor(N,V);
    switch (Opcao)
    {
        case 1: 
            ordenaInsercao(N,V);
            printf ("\nOrdenação - Método de Inserção Simples"); 
            break;
        case 2: 
            ordenaSelecao(N,V);
            printf ("\nOrdenação  - Método de Seleção Direta");
            break;
        case 3: 
            ordenaBolha(N,V);
            printf ("\nOrdenação - Método da Bolha");
            break;
        case 4: 
            ordenaMerge(N,V);
            printf ("\nOrdenação - Método Mergesort");
            break;
        case 5: 
            ordenaShell(N,V);
            printf ("\nOrdenação - Método Shellsort");
            break;
        case 6: 
            ordenaHeap(N,V);
            printf ("\nOrdenação - Método Heapsort");
            break;
        case 7: 
            ordenaQuick(N,V);
            printf ("\nnOrdenação - Método Quicksort");
            break;
        default: printf ("\n\nOpção inválida");
    }
	if (verificaOrdemCrescente (N,V) == 0)
		printf ("\n--> Vetor em ordem crescente!");
	else
		printf ("\n--> Erro de ordenação!");
	printf ("\nV");
	imprimeVetor (N,V);
}


void geraVetorAleatorio (int n, int v[]){
	srand(time(NULL));
	int Num=0
	
	for (int I=0;I<n;I++){
		Num = rand()%100;
		V[n] = Num;
	}
}

void imprimeVetor (int n, int v[]){
	for(int I=0;I<n;I++){
		printf("%d", v[I]);
	}
}

void geraVetorCrescente (int n, int v[]){
	int k = 0;
	
	while(k < n){
		v [k] = k + 1;
		k++;
	}
}

void geraVetorDecrescente (int n, int v[]){
	int k=n;
	
	while(k>=n){
		v [k] = k - 1;
		k--;
	}
}

int verificaOrdemCrescente (int n, int v[]){
	return Num;
}
