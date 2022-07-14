#include <stdio.h>
#include <stdlib.h>

void main() {

    // Definindo variáveis
    int a = 5, opcao = 3;
    float b = 2.5;
    char c = 'x';

    // Condicionais simples
    if(a == 5) {
        printf("\n A variável a = 5\n");
    }

    if(b == 2.5) {
        printf(" A variável b = 2.5\n");
    }

    if(c == 'x') {
        printf(" A variável c = letra x\n");
    }

    // Número par ou ímpar
    if(a % 2 == 0) {
        printf(" A variável a é par.\n", a);
    } else {
        printf(" A variável a é ímpar.\n", a);
    }

    // Condicionais compostas
    if(opcao == 1) {
        printf("\n A opção = 1");
    } else if (opcao == 2) {
        printf("\n A opção = 2");
    } else {
        printf("\n A opção não é igual a 1 e nem 2");
    }

    // Pausa o programa após executar
    printf("\n\n");
    system("pause");
}
