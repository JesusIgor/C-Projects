#include <stdio.h>

int somaMatriz(int l, int c, int m[l][c])
{

    int soma = 0;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if ((i == 0 || j == 0) || (i == (l - 1)) || (j == (c - 1)))
            {
                soma += m[i][j];
            }
        }
    }

    return soma;
}

int main()
{

    int linha, coluna;
    printf("Qual o tamanho da matriz?\nLinha: ");
    scanf("%i", &linha);
    printf("Coluna: ");
    scanf("%i", &coluna);

    int matriz[linha][coluna];
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Digite os valores da matriz\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    //Lendo os dados da matriz
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Matriz ficou da seguinte forma\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    //Mostrando a matriz para o usuário
    for (int i = 0; i < linha; i++)
    {
        printf("|");
        for (int j = 0; j < coluna; j++)
        {
            printf("%5d", matriz[i][j]);
        }
        printf("|\n");
    }

    printf("A soma da borda desta matriz eh: %d", somaMatriz(linha, coluna, matriz));

    return 0;
}
