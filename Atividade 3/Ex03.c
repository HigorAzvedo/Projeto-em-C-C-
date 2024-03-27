#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int idade, peso;
    float qtdDeGotas;

    printf("Qual a idade do paciente? ");
    scanf("%d", &idade);

    if(idade > 16){
        printf("Esse paciente não precisa tomar o remedio.");
    }else{
        printf("Qual e o peso do paciente? ");
        scanf("%d", &peso);

        if (idade >= 15 && idade <= 16 ){
            qtdDeGotas = 2 * (peso / 0.5);
        }else if(idade >= 11){
            qtdDeGotas = 2 * peso;
        }else if(idade >= 6){
            qtdDeGotas = 2 * (peso / 1.5);
        }else{
            qtdDeGotas = 2 * (peso / 2);
        }

        printf("Esse paciente tem que tomar %d gotas.", (int)qtdDeGotas);

    }

    return 0;
}