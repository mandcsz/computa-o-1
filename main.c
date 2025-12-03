#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LINHAS 4
#define COLUNAS 3
#define TAM 100

int ehVogal(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void inverterString(char s[]) {
    int i, j;
    char temp;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main() {
    char matriz[LINHAS][COLUNAS][TAM];
    char matrizModificada[LINHAS][COLUNAS][TAM];

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Digite a string da posição [%d][%d]: ", i, j);
            fgets(matriz[i][j], TAM, stdin);

            matriz[i][j][strcspn(matriz[i][j], "\n")] = '\0';

            strcpy(matrizModificada[i][j], matriz[i][j]);
        }
    }

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            int tam = strlen(matrizModificada[i][j]);

            if (tam > 0 &&
                ehVogal(matrizModificada[i][j][0]) &&
                ehVogal(matrizModificada[i][j][tam - 1])) {

                inverterString(matrizModificada[i][j]);
            }
        }
    }

    printf("\n===== MATRIZ ORIGINAL =====\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("[%d][%d] = %s\n", i, j, matriz[i][j]);
        }
    }

    printf("\n===== MATRIZ MODIFICADA =====\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("[%d][%d] = %s\n", i, j, matrizModificada[i][j]);
        }
    }

    return 0;
}
