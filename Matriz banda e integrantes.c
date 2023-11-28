#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i, j;
    char banda[3][200];
    char integrantes[3][5][200];

    for (i = 0; i < 3; i++)
    {
        printf("\n Digite o nome da %dº banda: ", i + 1);
        gets(banda[i]);

        printf("\n");

        for (j = 0; j < 2; j++)
        {
            printf(" Digite o nome do %dº integrante: ", j + 1);
            gets(integrantes[i][j]);
        }

        fflush(stdin);
    }

    system("cls || clear");

    // mostrando dados//

    for (i = 0; i < 3; i++)
    {
        printf("\n %dº banda: %s \n", i + 1, banda[i]);

        for (j = 0; j < 2; j++)
        {
            printf(" %dº integrante: %s \n", j + 1, integrantes[i][j]);
        }
    }

    return 0;
}