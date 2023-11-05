#include <stdio.h>

int main() {

    int valor, n1, n2, n3, n4, n5;

    printf("Informe um valor de 5 dígitos: ");
    scanf("%i", &valor);

    n1 = valor / 10000;

    printf("%i", n1);

    return 0;
}