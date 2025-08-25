#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int ano = 2025;
	int cod_empregado, ano_nasc, ano_emprego;
	
	printf("Digite o codigo do empregado: ");
	scanf("%d", &cod_empregado);
	
	printf("Digite o ano de nascimento (ex: yyyy): ");
	scanf("%d", &ano_nasc);
	
	printf("Digite o ano que começou na empresa (ex: yyyy): ");
	scanf("%d", &ano_emprego);
	
	if (ano - ano_nasc >= 65 || ano - ano_emprego == 30){
		printf("Você tem %d anos, e tem %d anos de empresa! Pode se aposentar!", ano - ano_nasc, ano - ano_emprego);
	}
	else if(ano - ano_nasc >= 60 and ano - ano_emprego >= 25){
		printf("Você tem %d anos, e tem %d anos de empresa! Pode se aposentar!", ano - ano_nasc, ano - ano_emprego);
	}
	else{
		printf("Você tem %d anos, e tem %d anos de empresa! Não pode aposentar!", ano - ano_nasc, ano - ano_emprego);
	}
}
