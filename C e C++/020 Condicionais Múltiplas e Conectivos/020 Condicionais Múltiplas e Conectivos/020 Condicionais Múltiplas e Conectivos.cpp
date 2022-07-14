#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Definindo variáveis
	int a = 20;

	// Concectivo Lógico (AND) , Se UMA COMPARAÇÃO for FALSA, não entra no bloco
	if (a > 5 && a < 15) printf("A variável 'a' está entre 5 e 15\n");

	// Concectivo Lógico (OR) , Se UMA COMPARAÇÃO for VERDDADEIRA, já entra no bloco
	if (a > 5 || a < 15) printf("A variável 'a' está entre 5 e 15\n");

	// Misturando Conectivos
	if ((a > 5 && a < 15) || a == 20) printf("A variável 'a' está entre 5 e 15 ou ela vale 20");

	printf("\n\n");
}
