#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 

    setlocale(LC_ALL, "Portuguese");

    char resp;
    char aluno[30];
    int n1, n2, n3, n4;
    float media;
    
    do {
        printf("Digite o nome do aluno: ");
        scanf("%s", aluno); 

        printf("Digite a primeira nota: ");
        scanf("%d", &n1);

        printf("Digite a segunda nota: ");
        scanf("%d", &n2);

        printf("Digite a terceira nota: ");
        scanf("%d", &n3);

        printf("Digite a quarta nota: ");
        scanf("%d", &n4);

        media =(n1 + n2 + n3 + n4) / 4;

        printf("\nA média do aluno %s, é de: %.1f\n", aluno, media);

        while (1) {
            printf("\nDeseja calcular a média para outro aluno? (S/N)\n");
            scanf(" %c", &resp);

            if (resp == 's' || resp == 'S' || resp == 'n' || resp == 'N') {
                break;
            } else {
                printf("Resposta inválida! Por favor, digite 'S' para Sim ou 'N' para Não.\n");
            }
        }

    } while (resp == 's' || resp == 'S');

    printf("\nPrograma finalizado.\n");
}
