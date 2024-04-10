#include <stdio.h>
#include <string.h>

int main(){

    char string[50], palindromo[50];

    printf("Digite uma palavra: ");
    gets(string);

    for (int i = strlen(string) - 1 , j = 0; i >= 0; i-- , j++){

        palindromo[j] = string[i];
    }

    palindromo[strlen(string)] = '\0';
    

    int comparandoStrings = strcmp(string, palindromo);
    printf("A string invertida e: %s \n", palindromo);

    if(comparandoStrings == 0){
        printf("E um palindromo \n");
    }else{
        printf("Nao e palindromo \n");
    }    
    
    return 0;
}
