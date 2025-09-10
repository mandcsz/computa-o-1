#include <stdio.h>

#define PRIMEIRA 1
#define ULTIMA 1 

int main()
{
	int quantidade_1;
	int quantidade_2;
	float valor;

	printf("digite a quantidade_1:");
	scanf("%d", &quantidade_1);

	printf("digite a quantidade_2:");
	scanf("%d", &quantidade_2);

	valor = (quantidade_1 + quantidade_2) * ((ULTIMA - PRIMEIRA / 2.0);

	if (valor > quantidade_1) {
		printf("O resultado é %f e as quantidades sao %d e %d", valor, quantidade_1, quantidade_2);
	}
	else {
		valor = valor * 0.8;
		printf("O resultado é %f e as quantidades sao %d e %d", valor * 0.8, quantidade_1, quantidade_2);
	}
	return 0;
}
