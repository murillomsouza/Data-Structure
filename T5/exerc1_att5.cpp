#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	int cont;
	float n1, n2, n3, n4, media;
	char nome[40], resp;
	setlocale(LC_ALL, "Portuguese");
	
	for(cont=1;cont<=2;cont++){
		printf("\nInforme seu nome: ");
		fflush(stdin);
		gets(nome);
		printf("\nInforme a 1� nota: ");
		scanf("%f", &n1);
		printf("\nInforme a 2� nota: ");
		scanf("%f", &n2);
		printf("\nInforme a 3� nota: ");
		scanf("%f", &n3);
		printf("\nInforme a 4� nota: ");
		scanf("%f", &n4);
		
		media = (n1 + n2 + n3 + n4) / 4;
		
		printf("\n%s, Sua m�dia �: %.1f.\n", nome, media);
		printf("\nDeseja calcular a m�dia de outro aluno? [s/n]: ");
		fflush(stdin);
		scanf("%c", &resp);
		
		if(resp == 's'){
			cont -= 1;
		}
		else{
			cont += 1;
		}
	}
	system("pause");
}
