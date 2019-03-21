#include <stdio.h>
#include <stdlib.h>
main()
{
    float nota1, nota2, nota3, MediaExercicios, media;
    int identificacao;

    printf("Digite o numero de identificacao: ");
    scanf("%d", &identificacao);
    printf("\nDigite a nota 1: ");
    scanf("%f", &nota1);
    printf("\nDigite a nota 2: ");
    scanf("%f", &nota2);
    printf("\nDigite a nota 3: ");
    scanf("%f", &nota3);
    printf("\nDigite a media de exercicios: ");
    scanf("%f", &MediaExercicios);

    media = (nota1+(nota2*2)+(nota3*3)+MediaExercicios)/7;

    printf("Média do aluno %d: %.2f", identificacao, media);

    return 0;
}
