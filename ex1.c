#include <stdio.h>

float sub(float a, float b){
    return a - b;
}
float mult(float a, float b){
    return a * b;
}
float add(float a, float b){
    return a + b;
}
float div(float a, float b){
    return a / b;
}
float pot(float a){
    return a * a;
}

void calculadora(){
    int opcao;
    float num1, num2, resultado;

    printf("Calculadora:\n");
    printf("1. Adicao\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("5. Potencia de 2\n");
    printf("6. Sair\n");
    scanf("%d", &opcao);

    if (opcao == 6){
        printf("Off...\n");
        return;
    }
    else if(opcao == 5){
        printf("Fala um numero:\n");
        scanf("%f", &num1);

        resultado = pot(num1);
        printf("Resposta: %.2f\n", resultado);

        return;
    }

    switch (opcao)
    {
    case 1:
    printf("Fala 1 numero\n");
    scanf("%f",&num1);
    printf("Fala outro numero pra eu somar\n");
    scanf("%f", &num2);
    resultado = add(num1, num2);
    printf("Resultado: %.2f", resultado);
    break;
    case 2:
    printf("Fala 1 numero\n");
    scanf("%f",&num1);
    printf("Fala mais um numero pra eu subtrair do outro\n");
    scanf("%f", &num2);
    resultado = sub(num1, num2);
    printf("Resultado: %.2f\n", resultado);
    break;
    case 3:
    printf("Fala 1 numero\n");
    scanf("%f",&num1);
    printf("Fala mais um numero pra eu multiplicar\n");
    scanf("%f", &num2);
    resultado = mult(num1, num2);
    printf("Resultado: %.2f\n", resultado);
    break;
    case 4:
    printf("Fala o numero dividendo\n");
    scanf("%f",&num1);
    printf("Fala mais um numero pra ser o divisor\n");
    scanf("%f", &num2);
    if (num2 == 0){
        do
        {
            printf("Impossivel dividir por 0\n");
            printf("tente outro numero\n");
            scanf("%f", &num2);
        } while (num2 == 0);
           
    }
        resultado = div(num1, num2);
    printf("Resultado: %.2f\n", resultado);
    
        break;
    
    default:
    printf("Comando não existente\n");

        break;
    }

}

int main (void){
    int continua;
    
    do
    {
        calculadora();
        printf("\nquer continuar com outra operacao?\n1. Sim \n2. Nao\n");
        scanf("%d", &continua);
    } while (continua == 1);
    
    printf("Off...\n");
    return 0;

}