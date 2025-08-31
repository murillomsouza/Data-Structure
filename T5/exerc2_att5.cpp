#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char resp;
	char aluno[30];
	int n1, n2, n3, n4;
	float media;
	
	while(resp != 's' || 'S' || 'n' || 'N'){
		
		printf("Digite o nome do aluno: ");
		scanf("%s", &aluno);
		
		printf("Digite a primeira nota: ");
		scanf("%d", &n1);
		
		printf("Digite a segunda nota: ");
		scanf("%d", &n2);
		
		printf("Digite a terceira nota: ");
		scanf("%d", &n3);
		
		printf("Digite a qaurta nota: ");
		scanf("%d", &n4);
		
		media = (n1 + n2 + n3 + n4) / 4;
		
		printf("\nA média do aluno %s, é de: %.1f\n", aluno, media);
		fflush(stdin);
		
		printf("\nDeseja continuar? ['s' para sim ou 'n' para não]\n");
		scanf("%c", &resp);
		
		if(resp == 'n' || resp == 'N'){
			printf("Saindo...");
			break;
		}
	}
	
}

