#include <stdio.h>

int main() {

	int alunos;
	int monitores;
	int total_pessoas;

	printf("Digite o numero de alunos:");
	scanf("%d", &alunos);

	printf("Digite o numero de monitores:");
	scanf("%d", &monitores);

	total_pessoas = alunos + monitores;

	if(total_pessoas <= 50) {

		printf("É possivel levar todos os alunos e monitores em apenas uma viagem.\n");
	} else {
		printf("Nao é possivel levar todos os alunos e monitores em apenas uma viagem.\n");
	}
	return 0;
}
