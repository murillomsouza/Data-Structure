#include <stdio.h>;
#include <locale.h>;

main(){
	int idade;
	
	setlocale (LC_ALL, "Portuguese");
	
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
	if((idade <= 10) or (idade >= 60)){
		printf("Pode Vacinar!");
	}
	
	else{
		printf("Não pode vacinar!");
	}
}
