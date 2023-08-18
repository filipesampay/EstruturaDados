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

// Função que gera um vetor com valores aleatórios no intervalo de 0 a 9.
void geraVetorAleatorio (int n, int v[]){
	srand(time(NULL));
	int Num=0;
	
	for (int I=0;I<n;I++){
		Num = rand()%100;
		v[I] = Num;
	}
}

// Função que imprime os elementos de um vetor.
void imprimeVetor (int n, int v[]){
	for(int I=0;I<n;I++){
		printf("%d ", v[I]);
	}
}

// Função que gera um vetor em ordem crescente.
void geraVetorCrescente (int n, int v[]){
	int k = 0;
	
	while(k < n){
		v [k] = k + 1;
		k++;
	}
}

// Função que gera um vetor em ordem decrescente.
void geraVetorDecrescente (int n, int v[]){
	int k=n;
	
	while(k>=n){
		v [k] = k - 1;
		k--;
	}
}

// Função que verifica se um vetor está em ordem crescente.
// Retorna 1 se o vetor estiver em ordem crescente, 0 caso contrário.
int verificaOrdemCrescente (int n, int v[]){
    
    int Flag=0;
    for (int I=1; I<n ; I++){
        if (v[I]<=v[I-1])
        {
            Flag++;
        }
        
    }
    if (Flag == 0)
    {
        return 1;
    }
    return 0;
}

// Função que verifica se um vetor está em ordem decrescente.
// Retorna 1 se o vetor estiver em ordem decrescente, 0 caso contrário.
int verificaOrdemDecrescente (int n, int v[]){

    int Flag = 0;
    for (int I=0; I<n; I++){
        if (v[I] >= v[I-1])
        {
            Flag++;
        }
        
    }
    if (Flag == 0)
    {
        return 1;
    }
    return 0;
    
}

// Função que realiza a ordenação por inserção de um vetor.
void ordenaInsercao (int n, int v[]){
    for (int I=0;I<n;I++){
        int ElementoAtual = v[I];
        int J = I-1;

        while (J>0 && v[J]>=ElementoAtual){
            v[J+1] = v[J];
            J--;
        }

        v[J+1] = ElementoAtual;
    }
}

// Função que realiza a ordenação por seleção direta de um vetor.
void ordenaSelecao(int n, int v[]) {
    for (int i = 0; i < n; i++) {
        int indiceMenor = i;

        for (int j = i + 1; j < n; j++) {  
            if (v[j] < v[indiceMenor])
                indiceMenor = j;
        }
        
        int aux = v[indiceMenor];
        v[indiceMenor] = v[i];
        v[i] = aux;
    }
}

// Função que realiza a ordenação por bolha de um vetor.
void ordenaBolha (int n, int v[]){
        for(int I=0; I<n ; I++){
            int Troca = 0;

            for (int J=0; J< n-I-1; J++){
                if (v[J] > v[J+1])
                {
                    int Aux = v[J];
                    v[J] = v[J+1];
                    v[J+1] = Aux;
                    Troca = 1;
                }
                
            }
            if (Troca == 0)
            {
                break;
            }
            
        }
    }

// Função que realiza a ordenação por shellsort de um vetor.
void ordenaShell(int n, int v[]) {
    int Intervalo, I, J, K, Aux;

    for (Intervalo = n / 2; Intervalo > 0; Intervalo /= 2) {
        for (I = Intervalo; I < n; I++) {
            Aux = v[I];
            J = I;

            while (J >= Intervalo && v[J - Intervalo] > Aux) {
                v[J] = v[J - Intervalo];
                J -= Intervalo;
            }

            v[J] = Aux;
        }
    }
}


void merge(int v[], int inicio, int meio, int fim) {
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;

    tamanho = fim - inicio + 1;
    p1 = inicio;
    p2 = meio + 1;
    temp = (int *)malloc(tamanho * sizeof(int));
    if (temp != NULL) {
        for (i = 0; i < tamanho; i++) {
            if (!fim1 && !fim2) {
                if (v[p1] < v[p2]) {
                    temp[i] = v[p1++];
                } else {
                    temp[i] = v[p2++];
                }
                if (p1 > meio) fim1 = 1;
                if (p2 > fim) fim2 = 1;
            } else {
                if (!fim1) {
                    temp[i] = v[p1++];
                } else {
                    temp[i] = v[p2++];
                }
            }
        }
        for (j = 0, k = inicio; j < tamanho; j++, k++) {
            v[k] = temp[j];
        }
    }
    free(temp);
}

void ordenaMergeRec(int v[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = (inicio + fim) / 2;
        ordenaMergeRec(v, inicio, meio);
        ordenaMergeRec(v, meio + 1, fim);
        merge(v, inicio, meio, fim);
    }
}

// Função que realiza a ordenação por mergesort de um vetor.
void ordenaMerge(int n, int v[]) {
    ordenaMergeRec(v, 0, n - 1);
}

// Método de ordenação HeapSort
void heapify(int v[], int n, int i) {
    int maior = i;
    int esq = 2 * i + 1;
    int dir = 2 * i + 2;

    if (esq < n && v[esq] > v[maior])
        maior = esq;

    if (dir < n && v[dir] > v[maior])
        maior = dir;

    if (maior != i) {
        int temp = v[i];
        v[i] = v[maior];
        v[maior] = temp;
        heapify(v, n, maior);
    }
}

// Função que realiza a ordenação por heapsort de um vetor.
void ordenaHeap(int n, int v[]) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(v, n, i);

    for (int i = n - 1; i >= 0; i--) {
        int temp = v[0];
        v[0] = v[i];
        v[i] = temp;
        heapify(v, i, 0);
    }
}

// Método de ordenação QuickSort
int particiona(int v[], int inicio, int fim) {
    int pivo = v[fim];
    int i = inicio - 1;

    for (int j = inicio; j <= fim - 1; j++) {
        if (v[j] < pivo) {
            i++;
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }

    int temp = v[i + 1];
    v[i + 1] = v[fim];
    v[fim] = temp;

    return i + 1;
}

void ordenaQuickRec(int v[], int inicio, int fim) {
    if (inicio < fim) {
        int pi = particiona(v, inicio, fim);
        ordenaQuickRec(v, inicio, pi - 1);
        ordenaQuickRec(v, pi + 1, fim);
    }
}

// Função que realiza a ordenação por quicksort de um vetor.
void ordenaQuick(int n, int v[]) {
    ordenaQuickRec(v, 0, n - 1);
}
