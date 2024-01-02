#include <stdio.h>
#include "../produto/produto.h"

#ifndef SALVAR_H
#define SALVAR_H

void salvarProdutos(Produto *lista, int totalProdutos, char arq[])
{
    FILE *arquivo = fopen(arq, "w");

    if (arquivo)
    {
        fprintf(arquivo, "%d\n", totalProdutos);
        for (int i = 0; i < totalProdutos; i++)
        {
            fprintf(arquivo, " %s\n", lista[i].nome);
            fprintf(arquivo, "%.2f\n", lista[i].preco);
            fprintf(arquivo, "%d\n", lista[i].quantidade);
        }
        fclose(arquivo);
    }

    printf("\n\tSua Lista Foi Salva Com Sucesso\n");
}

#endif