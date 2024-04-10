#include <stdio.h>
#include <string.h>

int main(){

    char frase[100];
    int palavras = 0, tamanho;   

    printf("Digite uma frase:\n");
    gets(frase);

    tamanho = strlen(frase);

    for(int i = 0; i < tamanho; i++){
        if (frase[i] == ' '){
            palavras++;
        }
    }

    printf("Nessa frase tem %d palavras", palavras + 1);
    
    return 0;
}
