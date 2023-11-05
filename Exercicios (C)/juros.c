#include <stdio.h>

int main() {

    float emprestimo, taxa, juros;
    int dias;

    printf("Informe o valor do empréstimo (-1 para finalizar): ");
    scanf("%f", &emprestimo);

    while (emprestimo != -1) {
        printf("Insira a taxa de juros: ");
        scanf("%f", &taxa);
        printf("Insira o tempo (em dias): ");
        scanf("%i", &dias);
        
        juros = emprestimo * taxa * dias / 365;

        printf("O valor dos juros é %.2f\n\n", juros);

        printf("Informe o valor do empréstimo (-1 para finalizar): ");
        scanf("%f", &emprestimo);
    }

    return 0;
}
