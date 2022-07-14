#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a = 1;

	// Primeiro confere a condição, depois repete o bloco
	while (a <= 10) {
		printf("%d ", a);
		a++;
	}

	// Alterando o valor de 'a'
	a = 20;

	// Primeiro executa uma vez depois confere a condição
	do {
		printf("%d ", a);
		a++;
	} while (a <= 10);

	printf("\n\n");
}
