#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 3;
	char b = 'x';

	switch (a) {
	case 1:
		printf("Opção escolhida: 1");
		break;
	case 2:
		printf("Opção escolhida: 2");
		break;
	case 3:
		printf("Opção escolhida: 3");
		break;
	default:
		printf("Opção inválida!");
	}
	printf("\n");

	switch (b) {
	case 'x':
		printf("A letra é x");
		break;
	default:
		printf("A letra não é x");
	}

	printf("\n\n");
}
