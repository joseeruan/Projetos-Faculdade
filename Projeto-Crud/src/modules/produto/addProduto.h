#include <stdio.h>
#include "produto.h"

#define MAX_PRODUTOS 100

#ifndef ADD_H
#define ADD_H

void addProduto(Produto *lista, int *totalProdutos)
{
    if (*totalProdutos >= MAX_PRODUTOS)
    {
        printf("Nao foi possivel adicionar mais produtos.\n");
        return;
    }
    else
    {
        Produto novoProduto;
        printf("\nInsira o nome do produto:\n");
        scanf("%59[^\n]", novoProduto.nome);

        printf("\nInsira o preco do produto:\n");
        scanf("%f", &novoProduto.preco);

        printf("\nInsira a quantidade de produtos disponiveis:\n");
        scanf("%i", &novoProduto.quantidade);

        lista[*totalProdutos] = novoProduto;
        (*totalProdutos)++;
        printf("Produto adicionado com sucesso!\n");
    }
}
#endif