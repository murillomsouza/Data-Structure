/*
O usu�rio final devera informar 7 numeros reais, que ser�o armazenados em um vetor.
ao final todos os valores dever�o ser exibidos.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	float numeros[7];
	
	//for para alimentar as posi��es do vetor
	for(x = 0; x < 7; x++){
		printf("\nInforme o %d� n�mero: ", x + 1);
		scanf("%f", &numeros[x]);
	}
	
	printf("\nExibindo os numeros armazenados: \n");
	
	//for para ler as posi��es do vetor
	for(x = 0; x < 7 ; x++){
		printf("\n%d� = %.0f", x + 1, numeros[x]);
	}
	
	return 0;
}
