#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");


    int numero, palindromo = 0, numOriginal, calc;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    numOriginal = numero;

    while (numero > 0) {
        calc = numero % 10;
        palindromo = palindromo * 10 + calc;
        numero /= 10;
    }

    if (numOriginal == palindromo) {
        printf("E um palindromo.\n");
    } else {
        printf("Nao e um palindromo.\n");
    }

    return 0;
}