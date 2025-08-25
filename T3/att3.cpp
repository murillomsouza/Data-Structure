#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int op, x, y;
	float z;
	
	do{
		system("cls");
		printf("\n##############################");
		printf("\nDIGITE A OPÇÃO DESEJADA");
		printf("\n 1 - PARA CÁLCULO DA RAIZ QUADRADA");
		printf("\n 2 - PARA CÁLCULO DE POTENCIALIZAÇÃO");
		printf("\n 3 - PARA CÁLCULO DO SENO");
		printf("\n 4 - PARA CÁLCULAR O LOGARITMO");
		printf("\n 5 - PARA CÁLCULO DE SOMA");
		printf("\n 6 - PARA CÁLCULO DE SUBTRAÇÃO");
		printf("\n 7 - PARA CÁLCULO DE MULTIPLICAÇÃO");
		printf("\n 8 - PARA CÁLCULO DE DIVISÃO");
		printf("\n 0 - SAIR\n");
		scanf("%d", &op);
		printf("\n##############################");
		
		switch(op){
			case 1:{
				printf("\n############### CÁLCULO DA RAIZ QUADRADA ###############");
				printf("\n DIGITE O VALOR PARA CÁLCULO DA RAIZ QUADRADA: ");
				scanf("%d", &x);
				z = sqrt(x);
				printf("\n NA RAIZ QUADRADA DO VALOR %d É: %.2f\n", x, z);
				system("pause");
				break;
			}
			case 2:{
				printf("\n############### CÁLCULO DE POTENCIALIZAÇÃO ###############");
				printf("\n DIGITE O VALOR PARA CÁLCULO DA POTÊNCIA: ");
				scanf("%d", &x);
				printf("\n DIGITE O VALOR DO EXPOENTE: ");
				scanf("%d", &y);
				z = pow(x, y);
				printf("\nA POTENCIA DO VALOR %d COM EXPOENTE %d É: %.2f\n", x, y, z);
				system("pause");
				break;
			}
			case 3:{
				printf("\n############### CÁLCULO DO SENO ###############");
				printf("\nDIGITE O ANGULO PARA CÁLCULO DE SENO: ");
				scanf("%d", &x);
				z = sin(x);
				printf("\nO ANGULO %d TEM O SENO DE: %.2f\n", x, z);
				system("pause");
				break;
			}
			case 4:{
				printf("\n############### CÁLCULO DO LOGARITMO ###############");
				printf("\nDIGITE O VALOR PARA CÁLCULO DO LOGARITMO: ");
				scanf("%d", &x);
				z = log(x);
				printf("\nO VALOR DO %d TEM O LOGARITMO: %.2f\n", x, z);
				system("pause");
				break;
			}
			case 5:{
				printf("\n############### SOMA ###############");
				printf("\nDIGITE O PRIMEIRO VALOR PARA SER SOMADO: ");
				scanf("%d", &x);
				printf("\nDIGITE O SEGUNDO VALOR PARA SER SOMADO: ");
				scanf("%d", &y);
				printf("\nO VALOR TOTAL É DE: %d \n", x + y);
				system("pause");
				break;
			}
			case 6:{
				printf("\n############### SUBTRAÇÃO ###############");
				printf("\nDIGITE O PRIMEIRO NUMERO A SER SUBTRAIDO: ");
				scanf("%d", &x);
				printf("\nDIGITE O SEGUNDO NUMERO A SER SUBTRAIDO: ");
				scanf("%d", &y);
				printf("\nO RESULTADO DA SUBTRAÇÃO É DE: %d \n", x - y);
				system("pause");
				break;
			}
			case 7:{
				printf("\n############### MULTIPLICAÇÃO ###############");
				printf("\nDIGITE O PRIMEIRO NUMERO A SER MULTIPLICADO: ");
				scanf("%d", &x);
				printf("\nDIGITE O SEGUNDO NUMERO A SER MULTIPLICADO: ");
				scanf("%d", &y);
				printf("\nO RESULTADO DA SUBTRAÇÃO É DE: %d \n", x * y);
				system("pause");
				break;
			}
			case 8:{
				printf("\n############### CÁLCULO DO LOGARITMO ###############");
				printf("\nDIGITE O VALOR DO DIVIDENDO: ");
				scanf("%d", &x);
				printf("\nDIGITE O VALOR DO DIVISOR: ");
				scanf("%d", &y);
				z = x / y;
				printf("\nO VALOR DO DIVIDENDO %d PELO DIVISOR %d É: %.2f\n", x, y, z);
				system("pause");
				break;
			}			 
			//uma forma de realizar o switch case for usar apenas uma linha
			case 0: printf("\n############### SAIR ###############"); break;
			default: printf("\nDIGITE UMA OPÇÃO VÁLIDA\n");system("pause");break;
		}
	}while(op !=0);
	
}
