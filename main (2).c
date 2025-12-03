#include <stdio.h>
#include <string.h>

#define QTD 100
#define TAM 100

float calculaMedia(char vetor[][TAM], int tamanho) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += strlen(vetor[i]); 
    }

    return (float)soma / tamanho;
}

int main() {
    FILE *arquivo;
    char frases[QTD][TAM];

    arquivo = fopen("frases.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    printf("Digite 100 frases (máximo 100 caracteres cada):\n");

    for (int i = 0; i < QTD; i++) {
        printf("Frase %d: ", i + 1);
        fgets(frases[i], TAM, stdin);

        frases[i][strcspn(frases[i], "\n")] = '\0';

        fprintf(arquivo, "%s\n", frases[i]);
    }

    fclose(arquivo);

    arquivo = fopen("frases.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    char vetorLido[QTD][TAM];
    int i = 0;

    while (i < QTD && fgets(vetorLido[i], TAM, arquivo) != NULL) {
        vetorLido[i][strcspn(vetorLido[i], "\n")] = '\0';  // remover \n
        i++;
    }

    fclose(arquivo);

    float media = calculaMedia(vetorLido, QTD);

    printf("\n===== STRINGS LIDAS DO ARQUIVO =====\n");
    for (int j = 0; j < QTD; j++) {
        printf("%d: %s\n", j + 1, vetorLido[j]);
    }

    printf("\n===== VETOR CARREGADO =====\n");
    for (int j = 0; j < QTD; j++) {
        printf("%d: %s\n", j + 1, vetorLido[j]);
    }

    printf("\n===== MÉDIA DE CARACTERES =====\n");
    printf("Média: %.2f caracteres por string\n", media);

    return 0;
}
