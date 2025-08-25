#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float desc;
	char op;
	int quantidade;
	float gasolina = 5.49;
	float etanol = 3.49;
	
	printf("Qual combustivel foi usado? Digite 'G' para GASOLINA e 'A' para ALCOOL.\n");
	scanf("%c", &op);
	
	printf("Quantidada de litros abastecidos: \n");
	scanf("%d", &quantidade);
	
	if(op == 'A' || 'a' and quantidade <= 20) {
		desc =(quantidade * etanol) - (etanol * 0.03 * quantidade); 
		printf("O valor total é: %.2f\n", desc);
		system("pause");
	}
	else if(op == 'A' || 'a' and quantidade > 20) {
		desc = (quantidade * etanol) - (etanol * 0.05 * quantidade); 
		printf("O valor total é: %.2f\n", desc);
		system("pause");
	}
	else if(op == 'G' || 'g' and quantidade <= 20){
		desc = (quantidade * gasolina) - (gasolina * 0.04 * quantidade);
		printf("O valor total é: %.2f\n", desc);
		system("pause");
	}
	else if(op == 'G' || 'g' and quantidade > 21){
		desc = (quantidade * gasolina) - (gasolina * 0.06 * quantidade);
		printf("O valor total é: %.2f\n", desc);
		system("pause");
	}
}
