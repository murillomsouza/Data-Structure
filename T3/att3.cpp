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
		printf("\nDIGITE A OP��O DESEJADA");
		printf("\n 1 - PARA C�LCULO DA RAIZ QUADRADA");
		printf("\n 2 - PARA C�LCULO DE POTENCIALIZA��O");
		printf("\n 3 - PARA C�LCULO DO SENO");
		printf("\n 4 - PARA C�LCULAR O LOGARITMO");
		printf("\n 5 - PARA C�LCULO DE SOMA");
		printf("\n 6 - PARA C�LCULO DE SUBTRA��O");
		printf("\n 7 - PARA C�LCULO DE MULTIPLICA��O");
		printf("\n 8 - PARA C�LCULO DE DIVIS�O");
		printf("\n 0 - SAIR\n");
		scanf("%d", &op);
		printf("\n##############################");
		
		switch(op){
			case 1:{
				printf("\n############### C�LCULO DA RAIZ QUADRADA ###############");
				printf("\n DIGITE O VALOR PARA C�LCULO DA RAIZ QUADRADA: ");
				scanf("%d", &x);
				z = sqrt(x);
				printf("\n NA RAIZ QUADRADA DO VALOR %d �: %.2f\n", x, z);
				system("pause");
				break;
			}
			case 2:{
				printf("\n############### C�LCULO DE POTENCIALIZA��O ###############");
				printf("\n DIGITE O VALOR PARA C�LCULO DA POT�NCIA: ");
				scanf("%d", &x);
				printf("\n DIGITE O VALOR DO EXPOENTE: ");
				scanf("%d", &y);
				z = pow(x, y);
				printf("\nA POTENCIA DO VALOR %d COM EXPOENTE %d �: %.2f\n", x, y, z);
				system("pause");
				break;
			}
			case 3:{
				printf("\n############### C�LCULO DO SENO ###############");
				printf("\nDIGITE O ANGULO PARA C�LCULO DE SENO: ");
				scanf("%d", &x);
				z = sin(x);
				printf("\nO ANGULO %d TEM O SENO DE: %.2f\n", x, z);
				system("pause");
				break;
			}
			case 4:{
				printf("\n############### C�LCULO DO LOGARITMO ###############");
				printf("\nDIGITE O VALOR PARA C�LCULO DO LOGARITMO: ");
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
				printf("\nO VALOR TOTAL � DE: %d \n", x + y);
				system("pause");
				break;
			}
			case 6:{
				printf("\n############### SUBTRA��O ###############");
				printf("\nDIGITE O PRIMEIRO NUMERO A SER SUBTRAIDO: ");
				scanf("%d", &x);
				printf("\nDIGITE O SEGUNDO NUMERO A SER SUBTRAIDO: ");
				scanf("%d", &y);
				printf("\nO RESULTADO DA SUBTRA��O � DE: %d \n", x - y);
				system("pause");
				break;
			}
			case 7:{
				printf("\n############### MULTIPLICA��O ###############");
				printf("\nDIGITE O PRIMEIRO NUMERO A SER MULTIPLICADO: ");
				scanf("%d", &x);
				printf("\nDIGITE O SEGUNDO NUMERO A SER MULTIPLICADO: ");
				scanf("%d", &y);
				printf("\nO RESULTADO DA SUBTRA��O � DE: %d \n", x * y);
				system("pause");
				break;
			}
			case 8:{
				printf("\n############### C�LCULO DO LOGARITMO ###############");
				printf("\nDIGITE O VALOR DO DIVIDENDO: ");
				scanf("%d", &x);
				printf("\nDIGITE O VALOR DO DIVISOR: ");
				scanf("%d", &y);
				z = x / y;
				printf("\nO VALOR DO DIVIDENDO %d PELO DIVISOR %d �: %.2f\n", x, y, z);
				system("pause");
				break;
			}			 
			//uma forma de realizar o switch case for usar apenas uma linha
			case 0: printf("\n############### SAIR ###############"); break;
			default: printf("\nDIGITE UMA OP��O V�LIDA\n");system("pause");break;
		}
	}while(op !=0);
	
}
