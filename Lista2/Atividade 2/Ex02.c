#include <stdio.h>
#include <string.h>

int main(){

    char string[50]; 
    char caractere;
    int tamanhaDoArray;
    int caractereEncontrado = 0;

    printf("Digite uma palavra: ");
    scanf("%s", string);
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    tamanhaDoArray = strlen(string);

    for(int i = 0; i < tamanhaDoArray; i++){
        if(string[i] == caractere){
            string[i] = '?';
            caractereEncontrado = 1;
        }
    }

    if (caractereEncontrado == 0){
        printf("O caracter informado nao faz parte da palavra lida");
    }else{
        printf("A palavra alterada e: %s \n", string);
    }
    
    return 0;
}
