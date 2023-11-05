#include <stdio.h>

int calcFatorial(int n);

int main () {
    int n;
    int resultado;

    printf("Insira um número para saber seu fatorial: ");
    scanf("%i", &n);

    resultado = calcFatorial(n);
    printf("%i", resultado);

    return 0;
}

int calcFatorial(int n) {


    if (n == 0 ){
        return 1;
    }
    else {
        int nFatorial = 1;

        for (int i = n; i >= 1; i--) {

        nFatorial = nFatorial * i;
    }
        return nFatorial;
    }
}       
