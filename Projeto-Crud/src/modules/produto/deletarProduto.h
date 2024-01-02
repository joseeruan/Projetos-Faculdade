#include <stdio.h>
#include "produto.h"

#ifndef DELETAR_H
#define DELETAR_H

void deletarProduto(Produto *lista, int *totalProdutos)
{

    int indice;

    printf("Insira o índice do produto a ser removido: ");
    scanf("%i", &indice);

    if (indice < 1 || indice > *totalProdutos)
    {
        printf("ID do produto inválido!\n");
        return;
    }
    else
    {
        for (int i = indice - 1; i < *totalProdutos - 1; i++)
        {
            lista[i] = lista[i + 1];
        }

        (*totalProdutos)--;
        printf("Produto removido com sucesso!\n");
    }
}
#endif