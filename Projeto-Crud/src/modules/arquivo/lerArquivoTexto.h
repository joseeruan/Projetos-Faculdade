#include <stdio.h>
#include "../produto/produto.h"

#ifndef LER_C
#define LER_C

int lerArquivoTexto(Produto *lista, char nomeArquivo[])
{
    FILE *arquivo = fopen(nomeArquivo, "r");
    int quantidadeProdutos = 0;
    Produto novoProduto;

    if (arquivo)
    {
        fscanf(arquivo, "%d\n", &quantidadeProdutos);

        for (int i = 0; i < quantidadeProdutos; i++)
        {
            if (fscanf(arquivo, " %59[^\n]\n", novoProduto.nome) == 1 &&
                fscanf(arquivo, "%f\n", &novoProduto.preco) == 1 &&
                fscanf(arquivo, "%d\n", &novoProduto.quantidade) == 1)
            {
                lista[i] = novoProduto;
            }
            else
            {
                printf("Erro ao ler os dados do produto do arquivo.\n");
                fclose(arquivo);
                return 0;
            }
        }

        fclose(arquivo);
        printf("\n\tSua lista foi carregada no sistema\n");
    }
    else
    {
        printf("\n\tNão foi possível abrir o arquivo\n");
    }

    return quantidadeProdutos;
}
#endif