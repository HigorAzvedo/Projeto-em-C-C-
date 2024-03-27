#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");


    int numero, palindromo = 0, numOriginal;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    numOriginal = numero;

    while (numero > 0) {
        int digito = numero % 10;
        palindromo = palindromo * 10 + digito;
        numero /= 10;
    }

    if (numOriginal == palindromo) {
        printf("E um palindromo.\n");
    } else {
        printf("Nao e um palindromo.\n");
    }










    // int numero, palindromo = 0, d;

    // printf("Digite um número inteiro: ");
    // scanf("%d", &numero);

    // while (numero)
    // {
    //     int d = numero % 10;
    //     palindromo = palindromo * 10 + d;
    //     numero /= 10;
    //     palindromo = d;

    //     // printf("var d = %d", d);

    // }

    // if (palindromo == numero)
    //     {
    //         printf(" O numero %d é um palindromo.\n", numero);
    //     }
    //     else
    //     {
    //         printf(" O numero %d nao é um palindromo.\n", numero);
    //     }

    return 0;
}