#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    char disciplina[3][100];
    int i, j, somanotas;
    float notas[2][3];
    float media[3];

    setlocale(LC_ALL, "portuguese");

    for (i = 0; i < 3; i++)
    {
        printf("\nDigite o nome da %dº disciplina: ", i + 1);
        gets(disciplina[i]);

        for (j = 0; j < 2; j++)
        {
            printf("Digite a %dº nota: ", j + 1);
            scanf("%f", &notas[i][j]);

            somanotas += notas[i][j];
        }

        media[i] = somanotas / (float) j;
        somanotas = 0;

        fflush(stdin);
    }

    // mostrando dados//

    system("cls || clear");

    for (i = 0; i < 3; i++)
    {
        printf(" \nDisciplina: %s \n", disciplina[i]);

        for (j = 0; j < 2; j++)
        {
            printf(" %dº Nota: %.1f \n", j + 1, notas[i][j]);
        }

        printf(" Média: %.1f \n", media[i]);
    }

    return 0;
}