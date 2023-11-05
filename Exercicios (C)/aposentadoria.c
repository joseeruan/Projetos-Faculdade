#include <stdio.h>
#include <math.h>

float calcRendimento(float valorInicial, float taxa, int anos, int meses);

int main()
{
    float valorInicial, taxa, rendTotal;
    int anos, meses, continuar;

    printf("Para sair a qualquer momento, insira -1 em qualquer pergunta.\n\n");
    do
    {
        printf("Insira o valor inicial para calcular o rendimento da sua conta. (-1 para sair): ");
        scanf("%f", &valorInicial);

        if (valorInicial == -1)
        {
            break;
        }

        printf("Insira o valor da taxa de juros mensal em porcentagem. (-1 para sair): ");
        scanf("%f", &taxa);

        if (taxa == -1)
        {
            break;
        }

        do
        {
            printf("Insira a idade em anos (até 65 anos) e meses. (-1 para sair): ");
            scanf("%i %i", &anos, &meses);

            if (anos >= 65)
            {
                printf("Erro: Insira uma idade menor que 65.\n");
            }
        } while (anos >= 65);

        if (anos == -1)
        {
            break;
        }

        rendTotal = calcRendimento(valorInicial, taxa, anos, meses);

        printf("O rendimento total com base na sua idade até os 65 anos é de: %.2f\n\n\n", rendTotal);

        printf("Você deseja fazer a operação mais uma vez? 1 para sim e -1 para não: ");
        scanf("%i", &continuar);

    } while (continuar == 1);

    printf("Programa encerrado pelo usuário.\n");

    return 0;
}

float calcRendimento(float valorInicial, float taxa, int anos, int meses)
{
    float valorFinal;
    int tempo = (65 - anos) * 12 - meses;

    taxa /= 100.0;

    valorFinal = valorInicial * pow(1 + taxa, tempo);

    return valorFinal;
}
