#include <stdio.h>


int arredonda(float x) {
   
    if (x > 0) {
       
        return (int)(x + 0.5);
    } else {
   
        return (int)(x - 0.5);
    }
}

int main() {
    float numero;
    
   
    printf("Digite um numero:");
    scanf("%f", &numero);

    printf("Valor arredondado: %d\n", arredonda(numero));

    return 0;
}

