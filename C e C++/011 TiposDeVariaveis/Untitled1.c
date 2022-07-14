#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main() {

    // Definindo variáveis
    int a;
    float b;
    char c;
    bool d;

    // Passando valores
    a = 5;
    b = 2.3;
    c = 'a';
    d = true; // true = 1, false = 0

    // Escrevendo na tela
    printf("O valor de a: %d", a);
    printf("\nO valor de b: %.1f\n", b);
    printf("O valor de c: %c\n", c);
    printf("O valor de d: %d", d);

    // Lendo valores
    printf("\n\nDefina um valor int para a: ");
    scanf("%d", &a);

    printf("Defina um valor float para b: ");
    scanf("%f", &b);

    printf("Defina um valor char para c: ");
    scanf(" %c", &c);

    printf("Defina um valor bool para d: ");
    scanf("%d", &d);

    // Escrevendo na tela
    printf("\nO valor de a agora é: %d\n", a);
    printf("O valor de b agora é: %.1f\n", b);
    printf("O valor de c agora é: %c\n", c);
    printf("O valor de d agora é: %d", d);

    // Pausando
    printf("\n\n");
    system("pause");
}
