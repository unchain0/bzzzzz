#include <stdio.h>
#include <stdlib.h>

void main() {
    // Definindo variáveis
    int a = 6, b = 4;

    // Soma
    printf("A soma de %d e %d = %d", a, b, a + b);

    // Subtração
    printf("\nA subtração de %d e %d = %d\n", a, b, a - b);

    // Divisão
    printf("A divisão de %d e %d = %d", a, b, a / b);

    // Multiplicação
    printf("\nA multiplicação de %d e %d = %d\n", a, b, a * b);

    // Resto da divisão
    printf("\nO resto da divisão entre %d e %d = %d", a, b, a % b);

    // Valor absoluto
    printf("\nO valor absoluto de -3 = %d", abs(-3));

    // Pausa o programa após executar
    printf("\n\n");
    system("pause");

}
