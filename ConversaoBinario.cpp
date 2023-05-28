#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int maior_zero(){
	int Numero;
	srand (time(NULL));
	
	Numero = rand()%100;
	if (Numero == 0)
		maior_zero();
	else
		return (Numero);
}

void get_binario(int *NumeroBinario, int Quociente){
	int Resto, I;
	
	while (Quociente > 0){
		Resto = Quociente%2;
		NumeroBinario[I] = Resto;
		Quociente = Quociente/2;
		I++;
	}
	for (int J = I-1; J>=0; J--){
		printf("%d", NumeroBinario[I]);
	}
}

int main(void){
	int NumeroBinario[32], NumeroGerado;
	
	NumeroGerado = maior_zero();
	get_binario(NumeroBinario, NumeroGerado);
	
	for(int I=0;I<32;I++){
		printf("%d", NumeroBinario[I]);
	}
}
