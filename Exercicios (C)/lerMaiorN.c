#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define true 1
#define false 0

int lerMaiorNumero();
void strMinuscula();

int main()
{
    char op[5];
    int maiorN;
    int verificar = true;
    do
    {
        printf("Você deseja testar o programa? Responda com Sim ou Não: ");
        scanf("%4s", op);
        strMinuscula(op);

        if (strcmp(op, "sim") != 0 && strcmp(op, "não") != 0)
        {
            printf("\nError: Caracteres inválidos. Tente novamente.");
        }
        else
        {
            verificar = false;
        }
    } while (verificar);

    if (strcmp(op, "sim") == 0)
    {
        maiorN = lerMaiorNumero();

        if (maiorN != -1)
        {
            printf("O maior número digitado foi: %i", maiorN);         
        }
       
    }
    
    printf("Programa encerrado com sucesso.");
    return 0;
}

void strMinuscula(char *str)
{
    for (int i = 0; str[i]; i++)
    {
        str[i] = tolower(str[i]);
    }
}

int lerMaiorNumero()
{
    int n, maiorN = 0;
    const int REPETICOES = 50;

    for (int i = 1; i <= REPETICOES; i++)
    {
        printf("Insira o %i número : (-1 para encerrar o programa): ", i);
        scanf("%i", &n);

        if (n == -1)
        {
            return -1;
        }
        if (n > maiorN)
        {
            maiorN = n;
        }
    }
    return maiorN;
}
