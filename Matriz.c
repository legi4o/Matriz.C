#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i, j;
    char alunos[3][100];
    float notas[3][3];
    float media[3];
    int somanotas = 0;

    for (i = 0; i < 3; i++)
    {
        printf("\nDigite o nome do %d� aluno: ", i + 1);
        gets(alunos[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Digite a %d� nota: ", j + 1);
            scanf("%f", &notas[i][j]);

            somanotas += notas[i][j];
        }

        media[i] = somanotas / j;
        somanotas = 0;

        fflush(stdin);
    }

    // mostrando dados//

    system("cls || clear");

    for (i = 0; i < 3; i++)
    {
        printf("\n %d� aluno: %s \n", i + 1, alunos[i]);

        for (j = 0; j < 3; j++)
        {
            printf(" %d� nota: %.1f \n", j + 1, notas[i][j]);
        }

        printf(" m�dia: %.1f \n", media[i]);
    }

    return 0;
}