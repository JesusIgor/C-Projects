#include <stdio.h>

float multVetor(float a[], float b[], int n)
{
    float soma = 0;
    for (int i = 0; i < n; i++)
    {
        soma += a[i] * b[i];
    }

    return soma;
}

void preencher(int b, float a[])
{

    for (int i = 0; i < b; i++)
    {
        printf("posicao %d: ", i);
        scanf("%f", &a[i]);
    }
}

int main()
{
    int tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    float vetA[tam], vetB[tam];
    printf("-=-=-=-=-=-=-=-=-=-\n");
    printf("Preencha o vetor A \n");
    printf("-=-=-=-=-=-=-=-=-=-\n");
    preencher(tam, vetA);

    printf("-=-=-=-=-=-=-=-=-=-\n");
    printf("Preencha o vetor B \n");
    printf("-=-=-=-=-=-=-=-=-=-\n");
    preencher(tam, vetB);

    printf("O produto escalar dos vetores eh: %.2f", multVetor(vetA, vetB, tam));
    return 0;
}