#include <stdio.h>
#include <stdlib.h>
main()
{
    float num1, num2;

    printf("INFORME UM NUMERO: ");
    scanf("%f", &num1);
    printf("INFORME OUTRO NUMERO: ");
    scanf("%f", &num2);

    if(num1>num2){
        printf("%.2f e maior!", num1);
    }else{
        printf("%.2f e maior!", num2);
    }

    return 0;
}
