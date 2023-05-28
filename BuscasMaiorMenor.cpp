#include<stdio.h>
#include<locale.h>

int buscaMaior(int Tamanho, int Vetor[]) {
    if (Tamanho == 1)
        return Vetor[0];
    
	int Resto = buscaMaior(Tamanho - 1, Vetor + 1);
    
	int Maior;
    if (Vetor[0] > Resto)
        Maior = Vetor[0];
    else
        Maior = Resto;
    return Maior;
}

int buscaMenor(int Tamanho, int Vetor[]) {
    if (Tamanho == 1) {
        return Vetor[Tamanho-1];
    }
    int Resto = buscaMenor(Tamanho - 1, Vetor + 1);
    int Menor;
    if (Vetor[0] < Resto)
        Menor = Vetor[0];
    else
        Menor = Resto;
    return Menor;
}

int buscaBinaria(int X, int Inicio, int Fim, int V[]) {
    if (Inicio > Fim)
        return Inicio;
    int Meio = (Inicio + Fim) / 2;
    if (V[Meio] == X)
        return Meio;
    else 
		if (V[Meio] > X)
        	return buscaBinaria(X, Inicio, Meio - 1, V);
    else
        return buscaBinaria(X, Meio + 1, Fim, V);
}

int main(){
   setlocale(LC_ALL,"Portuguese");
   int V1[] = {10, 30, 20, 5, 2, 0, 40, 15, 1, 3};
   int V2[] = {1, 10, 20, 30, 50, 100, 200, 300, 400, 500};
 
   printf ("Busca sequencial\n");
   printf ("\tMaior elemento de V1: %i\n", buscaMaior(10, V1));
   printf ("\tMenor elemento de V1: %i\n", buscaMenor(10, V1));
   printf ("\tMaior elemento de V2: %i\n", buscaMaior(10, V2));
   printf ("\tMenor elemento de V2: %i\n", buscaMenor(10, V2));
   printf ("\nBusca binária\n");
   printf ("\tO elemento 10 está na posição %i de V1.\n", buscaBinaria(10, 0, 9,V1));
   printf ("\tO elemento 500 está na posição %i de V2.\n", buscaBinaria(500, 0, 9,V2));
}
