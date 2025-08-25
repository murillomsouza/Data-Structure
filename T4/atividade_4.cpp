#include <stdio.h>
#include <locale>
#include <stdlib.h>

main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	char op;
	
	do{
		printf("Digite 'S' ou 'N' para continuar: ");
		scanf("%c", &op);
		if(op != 's' && op != 'S' && op != 'n' && op != 'N'){
			printf("\nInválido, tente novamente!\n");
			system("cls");
		}
		else{
			printf("Válido!");
		}
	}
	while(op != 's' && op != 'S' && op != 'n' && op != 'N');
}
