#include <stdio.h>
#include <stdlib.h>
main()
{
    int idade;

    printf("INFORME A IDADE DO NADADOR: ");
    scanf("%d", &idade);

    if(idade <5){
        printf("JOGADOR MUITO NOVO PRA COMPETIR");
    }else if(idade >= 5 && idade <= 7){
        printf("CATEGORIA INFANTIL A");
    }else if(idade >= 8 && idade <= 10){
        printf("CATEGORIA INFANTIL B");
    }else if(idade >= 11 && idade <= 13){
        printf("CATEGORIA JUVENIL A");
    }else if(idade >= 14 && idade <= 17){
        printf("CATEGORIA JUVENIL A");
    }else{
        printf("CATEGORIA ADULTO");
    }

    return 0;
}
