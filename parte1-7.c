#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    float altura, pesoideal;
    char sexo;

    printf("INFORME A ALTURA DA PESSOA: ");
    scanf("%f", &altura);

    printf("INFORME O SEXO DA PESSOA(M - MASCULINO, F- FEMININO): ");
    scanf("%s", &sexo);

    if(sexo == 'M' || sexo == 'm'){
        pesoideal = (72.7*altura)-58;
        printf("PESO IDEAL = %.2f", pesoideal);
    }else if(sexo == 'F' || sexo == 'f'){
        pesoideal = (62.1*altura)-44.7;
        printf("PESO IDEAL = %.2f", pesoideal);
    }else{
        printf("CODIGO INVALIDO!");
    }

    return 0;
}
