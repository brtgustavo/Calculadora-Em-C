#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor1,valor2,resultado;
    char operador;

    printf("Digite o primeiro valor:");
    scanf("%f",&valor1);

    printf("Digite a operacao: ");
    scanf(" %c",&operador);

    printf("Digite o segundo valor:");
    scanf("%f",&valor2);

    if(operador == '+'){
        resultado=valor1+valor2;

    }else if (operador == '-'){
        resultado=valor1-valor2;
    }else if(operador == '*'){
        resultado=valor1*valor2;
    }else if(operador == '/'){
        resultado=valor1/valor2;
    }else{
        printf("Resultado invalido");
    }

    printf("Resultado igual a %.2f: ", resultado);

    return 0;
}
