 #include <stdio.h>
 int main() {
    float n1, n2, aux;
    
    int codigo;
    
    n1 = 10;
    n2 = 30;
    
   
    printf("Digite o primeiro valor:");
    scanf ("%f", &n1);
    
    printf("Digite o segundo valor:");
    scanf ("%f", &n2);
    
    aux = n1 + n2;

    printf("%f", aux);
    return 0;
}