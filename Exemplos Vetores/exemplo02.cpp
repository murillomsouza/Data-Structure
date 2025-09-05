/*
O usuário final devera informar 7 numeros reais, que serão armazenados em um vetor.
ao final todos os valores deverão ser exibidos.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	float numeros[7];
	
	//for para alimentar as posições do vetor
	for(x = 0; x < 7; x++){
		printf("\nInforme o %dº número: ", x + 1);
		scanf("%f", &numeros[x]);
	}
	
	printf("\nExibindo os numeros armazenados: \n");
	
	//for para ler as posições do vetor
	for(x = 0; x < 7 ; x++){
		printf("\n%dº = %.0f", x + 1, numeros[x]);
	}
	
	return 0;
}
