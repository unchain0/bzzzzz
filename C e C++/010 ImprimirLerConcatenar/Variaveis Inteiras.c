#include <stdio.h>
#include <stdlib.h>

void main() {

    // definindo uma variável
    int a = 5, b;

    // Imprimindo a variável "a"
    // printf("%d\n", a);

    // Concatenando
    printf("O valor da var a é: %d", a);

    // Mundando o valor de "a"
    a = 15;

    // Concatenando
    printf("\nO valor de var a é: %d\n\n", a);

    // Lendo valores
    printf("Digite um valor para a variável b: ");
    scanf("%d", &b);

    // Concatenando
    printf("O valor de var b é: %d", b);
    printf("\nO dobro de b é: %d\n\n", dobro(b));
    printf("A soma de a e b: %d + %d é igual a %d", a, b, soma(a, b));

    // Imprimindo
    printf("\n\nUhuu\n");

    // Pausando
    system("pause");
}

int dobro(num) {
    // Dobra o número
    return num * 2;
}

int soma(n1, n2) {
    // Soma dois números
    return n1 + n2;
}
