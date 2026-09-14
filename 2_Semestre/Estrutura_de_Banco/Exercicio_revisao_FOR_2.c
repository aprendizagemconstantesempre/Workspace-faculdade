#include <stdio.h>
void main()
{
    int linha, coluna;
    for (linha = 1; linha <= 24; linha++)
    {
        for (coluna = 1; coluna < 40; coluna++)
        {
            printf("-");
        }
        printf("\n");
    }
}