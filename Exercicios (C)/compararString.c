#include <stdio.h>
#include <string.h>

int verificarContencao(char string1[], int tamanhoString1, char string2[], int tamanhoString2)
{
    char verificar[tamanhoString1 + 1];

    for (int i = 0; i < tamanhoString1; i++)
    {
        for (int j = 0; j < tamanhoString2; j++)
        {
            if (string1[i] == string2[j])
            {
                verificar[i] = string1[i];
            }
        }
    }

    verificar[tamanhoString1] = '\0';

    if (strcmp(verificar, string1) == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int contida;
    int tamString1 = 5;
    int tamString2 = 10;
    char string1[tamString1];
    char string2[tamString2];

    printf("Digite a primeira string: ");
    scanf("%s", string1);

    printf("Digite a segunda string: ");
    scanf("%s", string2);

    contida = verificarString(string1, tamString1, string2, tamString2);

    if (contida == 1)
    {
        printf("Ela não está contida");
    }
    else
    {
        printf("Ela está contida");
    }

    return 0;
}
