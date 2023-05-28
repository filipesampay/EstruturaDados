#include<stdio.h>

int getMultiplicacao(int Numero, int X){
    if (X == 0)
    {
        return 1;
    }
    else{
        return(Numero * getMultiplicacao(Numero, X-1));
    }
    
}

int main(int argc, char const *argv[])
{
    int Numero, Produto, X;
    printf("Digite dois valores: ");
    scanf("%d %d", &Numero, &X);

    Produto = getMultiplicacao(Numero, X);
    printf("O numero multiplicado e: %d", Produto);
    return 0;
}
