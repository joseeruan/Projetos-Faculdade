#include <stdio.h>
#include "produto.h"

#ifndef ATUALIZAR_H
#define ATUALIZAR_H

void atualizarProduto(Produto *lista)
{
    int opcao;
    int id;

    printf("Insira o que você deseja mudar:\n 1 = nome\n 2 = preço\n 3 = quantidade\n 4 para sair\n\n Insira sua opção: ");
    scanf("%i", &opcao);

    printf("Insira o ID do produto: ");
    scanf("%i", &id);

    switch (opcao)
    {
    case 1:
        printf("\nDigite o novo nome: \n");
        scanf("%59s", lista[id - 1].nome);
        printf("Nome do produto atualizado com sucesso!\n");
        break;
    case 2:
        printf("\nDigite o novo preço: \n");
        scanf("%f", &lista[id - 1].preco);
        printf("Preço do produto atualizado com sucesso!\n");
        break;
    case 3:
        printf("\nDigite a nova quantidade: \n");
        scanf("%i", &lista[id - 1].quantidade);
        printf("Quantidade do produto atualizado com sucesso!\n");
        break;
    case 4:
        printf("Saindo...\n");
        break;
    default:
        printf("Valor invalido\n");
    }
}
#endif