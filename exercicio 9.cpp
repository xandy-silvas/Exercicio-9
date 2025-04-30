#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0)
        return a;
    
    return mdc(b, a % b);
}

int main() {
    int a, b;
    
    printf("Digite dois numeros:\n");
    printf("Primeiro numero: ");
    scanf("%d", &a);
    printf("Segundo numero: ");
    scanf("%d", &b);
    
    int resultado = mdc(a, b);
    printf("O MDC de %d e %d eh: %d\n", a, b, resultado);
    
    return 0;
}
