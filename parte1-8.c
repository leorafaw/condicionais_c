#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    float quantidade, preco, total;
    char codigo[5];

    printf("INFORME O CODIGO DO ITEM: ");
    scanf(" %s", &codigo);

    printf("INFORME A QUANTIDADE DE ITENS: ");
    scanf("%f", &quantidade);

    if(strcmp(codigo,"ABCD")==0){
        preco = 5.30;
        total = quantidade*preco;
        printf("\nVALOR TOTAL DEVIDO: %.2f", total);
    }else if(codigo == "XYPK"){
        preco = 6;
        total = quantidade*preco;
        printf("\nVALOR TOTAL DEVIDO: %.2f", total);
    }else if(codigo == "KLMP"){
        preco = 3.2;
        total = quantidade*preco;
        printf("\nVALOR TOTAL DEVIDO: %.2f", total);
    }else if(codigo == "QRST"){
        preco = 2.5;
    }else {
        printf("CODIGO INVALIDO");
    }

    return 0;
}
