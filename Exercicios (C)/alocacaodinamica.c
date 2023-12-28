#include <stdio.h>
#include <stdlib.h>

void alocacaoDinamica(float **lista, int qtd)
{

    *lista = (float *)malloc(qtd * sizeof(float));

    if (lista)
    {
        for (int i = 0; i < qtd; i++)
        {
            printf("Digite o valor para lista[%d]: ", i + 1);
            scanf("%f", &(*lista)[i]);
        }
    }
    else
    {
        printf("Erro ao alocar memória.\n");
    }
}

int main()
{

    int qtd;
    float *lista;
    float *lista2;

    printf("Insira a quantidade de números: ");
    scanf("%d", &qtd);

    alocacaoDinamica(&lista, qtd);

    for (int i = 0; i < qtd; i++)
    {
        printf("%.2f\n", lista[i]);
    }

    printf("Insira a quantidade de números: ");
    scanf("%d", &qtd);

    alocacaoDinamica(&lista2, qtd);

    for (int i = 0; i < qtd; i++)
    {
        printf("%.2f\n", lista2[i]);
    }
}