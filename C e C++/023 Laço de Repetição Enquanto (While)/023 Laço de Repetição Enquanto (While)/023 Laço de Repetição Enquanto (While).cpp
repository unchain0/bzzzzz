#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 1, b = 10;

	// Contando até 10
	while (a <= 10) {
		printf("%d\n", a);
		a++;
	}

	// Contagem regressiva
	printf("\n\n");
	while (b > 0) {
		printf("%d\n", b);
		b--;
	}

	printf("\n\n");
}
