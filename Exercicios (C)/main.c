#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
        
    float saldo, totalEncargos, totalCreditos, limiteCredito;
    int numeroConta;

    printf("Informe o número da conta (-1 para terminar): ");
    scanf("%i", &numeroConta);

    while (numeroConta != -1) {
    
    printf("Insira o seu saldo inicial: ");
    scanf("%f", &saldo);

    printf("Insira o total de encargos: ");
    scanf("%f", &totalEncargos);

    printf("Insira o total de créditos: ");
    scanf("%f", &totalCreditos);

    printf("Informe o limite de crédito: ");
    scanf("%f", &limiteCredito);

    saldo = saldo + totalEncargos - totalCreditos;

    if (saldo > limiteCredito) {
    printf("\n");
    printf("Número de conta: %i\n", numeroConta);
    printf("Limite de crédito: %.2f \n", limiteCredito);
    printf("Saldo: %.2f \n", saldo);
    printf("Limite de Crédito Ultrapassado\n\n");

 }
    printf("Informe o número da conta: (-1 para terminar): ");
    scanf("%i", &numeroConta);
}

    return 0;
}

