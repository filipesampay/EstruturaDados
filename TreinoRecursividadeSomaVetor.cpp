#include<stdio.h>

int getSomaVetor(int V[], int Tamanho){
    if (Tamanho == 0)
    {
        return 0;
    }else{
        return Tamanho + getSomaVetor(V, Tamanho-1);
    }
    
}

int main(int argc, char const *argv[])
{
    int Vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int N=10, Soma;
    Soma = getSomaVetor(Vetor, N);
    printf("A soma dos elementos do vetor e: %d", Soma);
    return 0;
}
