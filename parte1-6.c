#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    int codigo;
    float quantidade, preco, total;
    char nome[100];

    printf("INFORME O CODIGO DO ITEM: ");
    scanf("%d", &codigo);

    printf("INFORME A QUANTIDADE DE ITENS: ");
    scanf("%f", &quantidade);

    if(codigo == 100){
        preco = 2.50;
        strcpy(nome, "CACHORRO QUENTE");
    }else if(codigo == 101){
        preco = 4.75;
        strcpy(nome, "BAURU SIMPLES");
    }else if(codigo == 102){
        preco = 5.20;
        strcpy(nome, "BAURU C OVO");
    }else if(codigo == 103){
        preco = 3.90;
        strcpy(nome, "HAMBURGUER");
    }else if(codigo == 104){
        preco = 4.20;
        strcpy(nome, "CHEESEBURGUER");
    }else if(codigo == 105){
        preco = 1.75;
        strcpy(nome, "REFRIGERANTE");
    }


    total = quantidade*preco;

    printf("FORAM COMPRADOS %.2f %s", quantidade, nome);
    printf("\nVALOR TOTAL: %.2f", total);

    return 0;
}
