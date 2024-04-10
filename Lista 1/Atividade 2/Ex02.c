#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int diasAlugados, kmRodado;
    float agencia1, agencia2;

    printf("Quantos dias vai querer alugar o veiculo? ");
    scanf("%d", &diasAlugados);
    printf("Quantos kilometros vão ser percorridos? ");
    scanf("%d", &kmRodado);

    agencia1 = (162.00 * diasAlugados) + (3.50 * kmRodado);
    agencia2 = (189.00 * diasAlugados) + (3.25 * kmRodado);

    printf("O valor da Agencia 1 para realizar essa viagem é R$%.2f \n\n",  agencia1);
    printf("O valor da Agencia 2 para realizar essa viagem é R$%.2f \n\n",  agencia2);

    if (agencia1 < agencia2){
        printf("Os preços da Agencia 1 estão mais baratos em relação a Agencia 2!");
    }else{
        printf("Os preços da Agencia 2 estão mais baratos em relação a Agencia 1!");
    }

    return 0;
}