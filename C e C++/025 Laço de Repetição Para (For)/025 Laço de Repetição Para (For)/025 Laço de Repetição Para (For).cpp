#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cont;

	// Tabuada do 5
	for (cont = 1; cont <= 10; cont++) {
		printf("5 X %d = %d\n", cont, 5 * cont);
	}
	printf("\n");

	// Contando de 2 em 2
	for (cont = 1; cont <= 10; cont += 2) {
		printf("%d ", cont);
	}
	printf("\n");

	// Contagem regressiva
	for (cont = 10; cont > 0; cont--) {
		printf("%d ", cont);
	}
	printf("\n");
}
