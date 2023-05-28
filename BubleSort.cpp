//Bubble Sort

#define TAM 15
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void bubbleSort(int V[], int Tamanho){
    int Aux, i, j;
    for (i = 0; i < Tamanho; i++)
    {
        for (j = 0; j < Tamanho-i-1; j++)
        {
            if (V[j] > V[j+1])
            {
                Aux = V[j];
                V[j] = V[j+1];
                V[j+1] = Aux;
            }
            
        }
        
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
    bubbleSort(Vetor, TAM);
    imprimeVetor(Vetor, TAM);

}