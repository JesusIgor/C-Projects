#include <stdio.h>
#include <stdbool.h>

//Função para verificar o digito de veracidade do CPF
int calculo(int a[10], int n)
{
    int i;
    int resto = 0;
    int cont = 0;
    int mult = 0;

    for (i = n; i >= 2; i--)
    {
        mult += i * a[cont];
        cont += 1;
    }
    resto = (mult * 10) % 11;
    return resto;
}

//Função para verificar se todos os numeros dao iguais
int repeticao(int a[10])
{

    int i = 1;

    for (i = 1; i < 11; i++)
    {
        if (a[0] != a[i])
        {
            return false;
        }
    }

    return true;
}

//Função principal
int main()
{
    int verifi1, digito, verifi2, verifi3;
    int cpf[10] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};

    digito = cpf[8];
    verifi1 = calculo(cpf, 10);
    verifi2 = calculo(cpf, 11);

    if (repeticao(cpf))
    {
        printf("Todos repetidos");
    }
    else
    {
        if (verifi1 != cpf[9])
        {
            printf("CPF INVALIDO");
        }
        else
        {
            if (verifi2 != cpf[10])
            {
                printf("CPF INVALIDO");
            }
            else
            {
                printf("Entrada aceita");
            }
        }
    }
    return 0;
}