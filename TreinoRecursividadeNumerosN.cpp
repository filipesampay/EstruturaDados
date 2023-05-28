#include<stdio.h>


int getSoma(int Numero){
    if (Numero == 0)
    {
        return 0;
    }
    else{
        return (Numero + getSoma(Numero-1));
    }
    
}

int main(int argc, char const *argv[])
{
    int Numero, Soma;
    printf("Digite um numero: ");
    scanf("%d", &Numero);
    Soma = getSoma(Numero);
    printf("A soma e: %d", Soma);
    return 0;
}
