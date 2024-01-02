#include <stdio.h>
#include "produto.h"

#ifndef MENU_H
#define MENU_H

int Menu()
{

    int opcao;

    printf("\n----- MENU DE ESTOQUE -----\n");
    printf("1. Adicionar um produto\n");
    printf("2. Ver todos os produtos\n");
    printf("3. Atualizar um produto\n");
    printf("4. Deletar um produto\n");
    printf("5. Salvar um arquivo\n");
    printf("6. Ler o arquivo\n");
    printf("7. Sair\n");
    printf("Escolha uma opcao:\n");
    scanf("%d", &opcao);

    return opcao;
}
#endif