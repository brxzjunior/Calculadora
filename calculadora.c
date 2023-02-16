#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float a,b,soma,sub,mult,div;
    int opc;

    printf("Insira um valor: ");
    scanf("%f", &a);
    printf("Insira outro valor: ");
    scanf("%f", &b);


    printf("Escolha uma opção: ");
    printf("\n 1 - Adição");
    printf("\n 2 - Subtração");
    printf("\n 3 - Multiplicação");
    printf("\n 4 - Divisão");
    printf("\n");
    scanf("%d", &opc);

    switch (opc){
        case 1:
            soma = (a + b);
            printf("\n A soma entre os valores é: %.2f",soma);
        break;

        case 2:
            sub = (a - b);
            printf("\n A subtração entre os valores é: %.2f",sub);
        break;

        case 3:
            mult = (a * b);
            printf("\n A multiplicação entre os valores é: %.2f",mult);
        break;

        case 4:
            div = (a / b);
           printf("\n A divisão entre os valores é: %.2f",div);
        break;

        default:
        printf("Opção inválida!");
        break;
    }

    return 0;
}


