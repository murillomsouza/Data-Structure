#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int a,b, c;
	
	printf("Digite o primeiro lado: ");
	scanf("%d",&a);
	
	printf("\nDigite o segundo lado: ");
	scanf("%d",&b);
	
	printf("\nDigite o terceiro lado: ");
	scanf("%d",&c);
	
	if(a < b + c || b < a + c && c < a + b) {
		
		if (a == b and b == c ) {
		printf("\n� um tri�ngulo equil�tero!");
		}
		
		else if(a == b || b == c || a == c) {
		printf("\n� um tri�ngulo is�sceles!");	
		} 
		
		else{
			printf("\n� um tri�ngulo escaleno!");
		}
	}
}
