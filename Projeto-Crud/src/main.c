#include <stdio.h>
#include "modules/produto/produto.h"
#include "modules/produto/menu.h"
#include "modules/produto/addProduto.h"
#include "modules/produto/atualizarProduto.h"
#include "modules/produto/deletarProduto.h"
#include "modules/produto/listarProduto.h"
#include "modules/arquivo/lerArquivoTexto.h"
#include "modules/arquivo/salvarProdutos.h"

int main()
{

    Produto lista[MAX_PRODUTOS];
    int totalProdutos = 0;
    char nomeArquivo[] = "estoqueProdutos.txt";
    int opcao;

    do
    {
        opcao = Menu();

        switch (opcao)
        {
        case 1:
            getchar();
            addProduto(lista, &totalProdutos);
            break;
        case 2:
            listarProdutos(lista, totalProdutos);
            break;
        case 3:
            atualizarProduto(lista);
            break;
        case 4:
            deletarProduto(lista, &totalProdutos);
            break;
        case 5:
            salvarProdutos(lista, totalProdutos, nomeArquivo);
            break;
        case 6:
            totalProdutos += lerArquivoTexto(lista, nomeArquivo);
            break;
        case 7:
            printf("Saindo...\n");
            return 0;

        default:
            printf("Opção inválida!\n");
        }
    } while (opcao != 7);

    return 0;
}