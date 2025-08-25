#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int id, nota_1, nota_2, nota_3, nota_4;
	float media;
	
	printf("\n Digite o ID do aluno: ");
	scanf("%d", &id);
	printf("\n Digite a primeira nota: ");
	scanf("%d", &nota_1);
	printf("\n Digite a segunda nota: ");
	scanf("%d", &nota_2);
	printf("\n Digite a terceira nota: ");
	scanf("%d", &nota_3);
	printf("\n Digite a quarta nota: ");
	scanf("%d", &nota_4);
	
	media = (nota_1 + nota_2 + nota_3 + nota_4) / 4;
	if(media <=3.9){
		printf("\n O aluno %d, ficou com média de: %f e sua nota foi E", id, media);
	}
	else if(media <= 5.9){
		printf("\n O aluno %d, ficou com média de: %f e sua nota foi D", id, media);
	}
	else if(media <= 7.4){
		printf("\n O aluno %d, ficou com média de: %f e sua nota foi C", id, media);
	}
	else if(media <= 8.9){
		printf("\n O aluno %d, ficou com média de: %f e sua nota foi B", id, media);
	}
	else{
		printf("\n O aluno %d, ficou com média de: %f e sua nota foi A", id, media);
	}

}
