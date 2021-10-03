#include <stdio.h>

//Função de verificação do digito para veracidade do CNPJ
int ver(int a[14], int numero)
{

    int j, digito = 0, resto = 0, soma = 0;

    j = numero - 7;

    for (int i = 0; i < numero; i++)
    {
        soma += a[i] * j;
        j--;
        if (j < 2)
        {
            j = 9;
        }
    }

    resto = (soma % 11);

    if (resto < 2)
    {
        digito = 0;
    }
    else
    {
        digito = 11 - resto;
    }

    return digito;
}

//Função principal
int main()
{
    char userCNPJ[25];
    int cnpj[14], firstDig, secondDigi;
    printf("Digite o numero do cnpj: ");
    fgets(userCNPJ, 25, stdin);
    int j = 0;
    for (int i = 0; i < 25; i++)
    {
        switch (userCNPJ[i])
        {
        case '0':
            cnpj[j] = 0;
            j++;
            break;
        case '1':
            cnpj[j] = 1;
            j++;
            break;
        case '2':
            cnpj[j] = 2;
            j++;
            break;
        case '3':
            cnpj[j] = 3;
            j++;
            break;
        case '4':
            cnpj[j] = 4;
            j++;
            break;
        case '5':
            cnpj[j] = 5;
            j++;
            break;
        case '6':
            cnpj[j] = 6;
            j++;
            break;
        case '7':
            cnpj[j] = 7;
            j++;
            break;
        case '8':
            cnpj[j] = 8;
            j++;
            break;
        case '9':
            cnpj[j] = 9;
            j++;
            break;
        }
    }

    firstDig = ver(cnpj, 12);
    secondDigi = ver(cnpj, 13);

    if (firstDig == cnpj[12])
    {
        if (secondDigi == cnpj[13])
        {
            printf("CNPJ VALIDO");
        }
        else
        {
            printf("CNPJ INVALIDO");
        }
    }
    else
    {
        printf("CNPJ INVALIDO");
    }

    return 0;
}