#include <stdio.h>
#include "produto.h"

#ifndef lISTAR_H
#define LISTAR_H

void listarProdutos(Produto *lista, int totalProdutos)
{
    printf("\n=== Lista de Produtos ===\n\n");

    for (int i = 0; i < totalProdutos; i++)
    {
        printf("Produto %i:\n\n", i + 1);
        printf("Nome: %s\n", lista[i].nome);
        printf("Preco: R$ %.2f\n", lista[i].preco);
        printf("Quantidade disponivel: %i unidades\n\n", lista[i].quantidade);
    }

    printf("=== Fim da Lista ===\n\n");
}

#endif