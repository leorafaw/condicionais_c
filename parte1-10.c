#include <stdio.h>
#include <stdlib.h>
main()
{
    int numero;

    printf("DIGITE UM NUMERO: ");
    scanf("%d", &numero);
    if(numero>0){
        printf("\nE POSITIVO");
    }else if(numero == 0){
        printf("\nE NEUTRO");
    }else{
        printf("\nE NEGATIVO");
    }
    if((numero%2)==0){
        printf("\nE PAR");
    }else{
        printf("\nE IMPAR");
    }

    return 0;
}
