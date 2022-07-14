#include <stdlib.h>
#include <stdio.h>

int main()
{    
    // Definindo variáveis
    int a = 5, b = 10, c = 15;
    char d = 'x';

    // Maior
    if (a > 2) printf(" %d é maior que 2", a);
    // Maior ou igual
    if (c >= b) printf("\n %d é maior ou igual a %d\n", c, b);

    // Menor
    if (a < 10) printf(" %d é menor que 10", a);
    // Menor ou igual
    if (a <= 10) printf("\n %d é menor ou igual a 10\n", a);

    // Diferente
    if (c != 10) printf(" %d não é 10", c);
    if (d != 'a') printf("\n %c não é a", d);

    // Pausa o programa após executar
    printf("\n\n");
    system("pause");
}