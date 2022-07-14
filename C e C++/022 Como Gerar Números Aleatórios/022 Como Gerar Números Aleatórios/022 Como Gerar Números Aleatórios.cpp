#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	// Responsável por alimentar o rand de forma diferente
	srand((unsigned)time(NULL));

	// Variável que recebe o resto da divisão do número por 3 (aleatório entre 0 e 2)
	int aleatorio = rand() % 3;

	// Variável que recebe o resto da divisão do número por 5 (aleatório entre 1 e 5)
	int aleatorioSegundo = (rand() % 5) + 1;

	// Imprime o valor
	printf("%d", aleatorio); // 0 - 2
	printf("\n%d", aleatorioSegundo); // 1 - 5

	printf("\n\n");
}
