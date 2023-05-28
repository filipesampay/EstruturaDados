//InsersionSort

#define TAM 15
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void insercao(int V[], int Tamanho){
    int i, j, Aux;
    for (int i = 0; i < Tamanho; i++)
    {
        Aux = V[i];
        j=i;
        while ((j > 0)&&(Aux < V[j-1]))
        {
            V[j] = V[j-1];
            j--;
        }
    V[j] = Aux;
    }
}

void imprimeVetor(int V[], int Tamanho){
    for (int i = 0; i < Tamanho; i++)
    {
        printf("%d ", V[i]);
    }
}

void getRandom(int V[], int Tamanho){
    srand(time(NULL));
    for (int i = 0; i < Tamanho; i++)
    {
        V[i] = rand()%100;
    }
    
}

int main(int argc, char const *argv[])
{
    int Vetor[TAM];
    
    getRandom(Vetor, TAM);
    printf("Vetor: ");
    imprimeVetor(Vetor, TAM);

    printf("\n");
    insercao(Vetor, TAM);
    imprimeVetor(Vetor, TAM);
}