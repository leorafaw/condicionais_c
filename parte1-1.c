#include <stdio.h>
#include <stdlib.h>
main()
{
    float nota1, nota2, nota3, media;
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("\nDigite a nota 2: ");
    scanf("%f", &nota2);
    printf("\nDigite a nota 3: ");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;

    printf("MEDIA: %.2f", media);

    if(media >= 7){
        printf("\nA P R O V A D O");
    }else{
        printf("\nR E P R O V A D O");
    }


    return 0;
}
