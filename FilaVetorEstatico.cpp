/*O programa deve conter as funções criaFila, colocaFila, tiraFila, filaVazia, tamanhoFila e ordenaFila.
O vetor que abriga a fila e os índices que indicam o início e o fim da fila devem ser variáveis globais do programa.
A interface deve ser conforme o programa principal abaixo e as saídas conforme o plano de testes.*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int Fila[MAX];
int Inicio;
int Fim;

void criaFila(){
    Inicio = 0;
    Fim = 0;
}

void colocaFila(int Elemento){
    if (Fim==MAX)
    {
        printf("\nFila cheia");
        return;
    }
    Fila[Fim] = Elemento;
    Fim++;
    
}

int tiraFila(){
    if (Inicio==Fim)
    {
        printf("\nFila vazia");
        return 0;
    }
    int Senha = Fila[Inicio];
    Inicio++;
    return Senha;
    
}

int filaVazia(){
    return (Inicio==Fim);
    
}

int tamanhoFila(){
    return Fim-Inicio;
}


void imprimeFila(){
    for (int i = 0; i < Fim; i++)
    {
        printf("%d ", Fila[i]);
    }
    
}

void ordenaFila(){
    int Aux;
    for (int i = 0; i < tamanhoFila(); i++)
    {
        for (int j = i + 1; j < tamanhoFila(); j++)
        {
            if (Fila[i]<Fila[j])
            {
                Aux = Fila[i];
                Fila[i] = Fila[j];
                Fila[j] = Aux;
            }
        }
    }
}




int main() {
  int Senha;
  criaFila ();
  do {
     printf("Informe senha da fila atendimento ou 0 para encerrar enfileiramento: ");
     scanf("%i", &Senha);
     colocaFila (Senha);
  }while ( Senha != 0 ); 
  if (filaVazia () != 0 )
     printf("Fila vazia!");
  else { 
     printf("A fila tem %d elementos:", tamanhoFila());
     imprimeFila();
     printf("\nOrganizando a fila de atendimento! Senhas menores são atendidas primeiro!");
     printf("\nFila em ordem crescente de senha de atendimento:");
     ordenaFila();
     imprimeFila();
     while (Inicio < Fim) {
        printf("\nPróximo: %i", tiraFila ());
     }
   }
   return 0;
}