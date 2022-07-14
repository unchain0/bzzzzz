#include <stdio.h>
#include <stdlib.h>
#include "026 Menus e Seleções Simples.h"

int main() {
	int opcao;

	printf("1 - Opção 1");
	printf("\n2 - Opção 2\n");
	printf("3 - Opção 3");
	printf("\nEscolha uma opção: ");

	scanf_s("%d", &opcao);
	printf("\n");

	switch (opcao) {
	case 1:
		printf("Opção 1 foi escolhida.");
		break;
	case 2:
		printf("Opção 2 foi escolhida.");
		break;
	case 3:
		printf("Opção 3 foi escolhida.");
		break;
	default:
		printf("Opção inválida.");
	}

	printf("\n");
}
