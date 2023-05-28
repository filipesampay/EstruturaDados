#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int getRandomNumbers();
int getBinary(int Numero);

int main(){
    int Numero = getRandomNumbers();
    int Binario = getBinary(Numero);
	printf("Numero gerado: %d", Numero);
    printf("Numero gerado convertido para binario: %d", Binario);
}

int getRandomNumers(){
    srand(time(NULL));
    
    int Numero = rand()%100;
    return Numero;
}

int getBinary(int Numero){
    int Binario, Decimal, Resto;
    
    for (int i=0; Decimal != 0; i++)
    {
        Resto = Decimal % 2;
        Decimal = Decimal / 2;
    }
    return Binario;
}