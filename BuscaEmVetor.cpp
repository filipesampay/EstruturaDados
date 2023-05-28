#define TAM 35
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void ordenaVetor(int V[], int Tamanho){
    int i, Aux, j;
    for (i = 0; i < Tamanho; i++)
    {
        for ( j = 0; j < Tamanho; j++)
        {
            if (V[i] < V[j])
            {
                Aux = V[i];
                V[i] = V[j];
                V[j] = Aux;                
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

int buscaBinaria(int V[], int inicial, int final, int Busca){
    int Meio, flag, Aux;
    while (inicial <= final)
    {
        Meio = (inicial+final)/2;
        if (V[Meio] == Busca)
        {
            flag = 1;
            return Meio;
        }
        else if (V[Meio] > Busca)
        {
            final = Meio-1;
        }
        else
            inicial = Meio + 1;
    }  
    if (flag != 1)
    {
        return 1;
    }
    
}

int main(int argc, char const *argv[])
{
    int Vetor[TAM];
    
    getRandom(Vetor, TAM);
    printf("Vetor: ");
    imprimeVetor(Vetor, TAM);
    
    printf("\nVetor ordenado: ");
    ordenaVetor(Vetor, TAM);
    imprimeVetor(Vetor, TAM);

    int Resultado = buscaBinaria(Vetor, 0, TAM, 95);
    
    if (Resultado == 1)
    {
        printf("\nNumero nao encontrado no vetor");
    }
    else
        printf("\nNumero encontrado na posicao %d do vetor.", Resultado);
    return 0;
}
