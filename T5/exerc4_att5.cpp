#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");

    char resp;
    char aluno[30];
    float n1, n2, n3, n4; 
    float media;

    while (1) {

        printf("Digite o nome do aluno: ");
        scanf("%s", aluno); 

        do {
            printf("Digite a primeira nota (0 a 10): ");
            scanf("%f", &n1);
            if (n1 < 0 || n1 > 10) {
                printf("Por favor, insira um valor entre 0 e 10.\n");
            }
        } while (n1 < 0 || n1 > 10);

        do {
            printf("Digite a segunda nota (0 a 10): ");
            scanf("%f", &n2);
            if (n2 < 0 || n2 > 10) {
                printf("Por favor, insira um valor entre 0 e 10.\n");
            }
        } while (n2 < 0 || n2 > 10);

        do {
            printf("Digite a terceira nota (0 a 10): ");
            scanf("%f", &n3);
            if (n3 < 0 || n3 > 10) {
                printf("Por favor, insira um valor entre 0 e 10.\n");
            }
        } while (n3 < 0 || n3 > 10);

        do {
            printf("Digite a quarta nota (0 a 10): ");
            scanf("%f", &n4);
            if (n4 < 0 || n4 > 10) {
                printf("Por favor, insira um valor entre 0 e 10.\n");
            }
        } while (n4 < 0 || n4 > 10);

        media = (n1 + n2 + n3 + n4) / 4;
        printf("\nA média do aluno %s, é de: %.1f\n", aluno, media);
        
        do {
            printf("\nDeseja continuar? ['s' para sim ou 'n' para não]\n");
            scanf(" %c", &resp); 

            if (resp != 's' && resp != 'S' && resp != 'n' && resp != 'N') {
                printf("Resposta inválida! Por favor, digite 's' ou 'n'.\n");
            }

        } while (resp != 's' && resp != 'S' && resp != 'n' && resp != 'N');
        
        if (resp == 'n' || resp == 'N') {
            printf("Saindo...\n");
            break;
        } 
        system("cls || clear");
    }    
}
