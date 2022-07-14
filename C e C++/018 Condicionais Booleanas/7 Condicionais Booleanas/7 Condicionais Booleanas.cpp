#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	// Definindo variáveis
	bool a = true, b = false;

	// Se A for verdadeiro
	if (a) printf("A é verdadeiro\n");

	// Comparando o B
	if (b) printf("B é verdadeiro");
	else printf("B é falso");

	// Comparando uma falsidade
	if (!b) printf("\nB é falso");

	// Pausa o programa
	printf("\n\n");
	system("pause");
}
