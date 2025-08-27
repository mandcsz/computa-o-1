#include <stdio.h>

int main() {
	float base, altura, perimetro, area;

	int codigo;

	printf("Digite o valor da base:");
	scanf("%f", &base);

	printf("Digite o valor da altura:");
	scanf("%f", &altura);

	perimetro = 2 * base + 2 * altura;
	area = base * altura;

	printf("Perimetro: %.2f\n", perimetro);
	printf("Area: %.2f\n", area);

	if(perimetro > area) {
		printf("O perimetro C) maior que a area.\n");
	} else if (area > perimetro) {
		printf("A area é maior que o perimetro.\n");
	} else {
		printf("A area e o perimetro sao iguais.\n");
	}
	return 0;
}
