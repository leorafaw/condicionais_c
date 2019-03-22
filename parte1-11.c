#include <stdio.h>
#include <stdlib.h>
main()
{
    int numero, menor;
    menor = 999999999;
    for(int i = 0; i<5; i++){
        printf("Informe o %d numero: ", i+1);
        scanf("%d", &numero);
        if(numero<menor){
            menor = numero;
        }
    }

    printf("O MENOR NUMERO E: %d", menor);
}
