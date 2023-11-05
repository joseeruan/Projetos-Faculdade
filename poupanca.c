/*Tendo como base na aplicação acima, crie um programa que calcule o valor total da poupança que além do valor inicial e valor do juros,
também receba valores de aplicações mensais (ex.: R$50,00/mês) durante todo o período da sua idade até os 65 anos.*/
#include <stdio.h>

float calcRendimento(float valorInicial, float taxa, int idade, float apMensal);

int main()
{
    float valorInicial, taxa, apMensal, rendTotal;
    int idade, continuar;

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
            printf("Insira uma idade menor que 65. (-1 para sair): ");
            scanf("%i", &idade);

            if (idade >= 65)
            {
                printf("Error: Insira uma idade menor que 65.\n");
            }
        } while (idade >= 65);

        if (idade == -1)
        {
            break;
        }

        printf("Insira o valor da aplicação mensal: (-1 para sair): ");
        scanf("%f", &apMensal);

        if (apMensal == -1)
        {
            break;
        }
        rendTotal = calcRendimento(valorInicial, taxa, idade, apMensal);

        printf("O rendimento total com base na sua idade até os 65 anos é de: %.2f\n\n\n", rendTotal);

        printf("Você deseja fazer a operação mais uma vez? 1 para sim e -1 para não: ");
        scanf("%i", &continuar);

    } while (continuar == 1);

    printf("Programa encerrado pelo usuário.\n");

    return 0;
}

float calcRendimento(float valorInicial, float taxa, int idade, float apMensal)
{

    float valorFinal = valorInicial;
    int tempo = (65 - idade) * 12;

    for (int i = 0; i < tempo; i++)
    {
        valorFinal *= taxa;
        valorFinal += apMensal;
    }

    return valorFinal;
}
