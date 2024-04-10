#include <stdio.h>
#include <string.h>

int main(){

   char texto[100];
   int contadorA = 0, contadorE = 0, contadorI = 0 , contadorO = 0, contadorU = 0;

   printf("Digite um texto: ");
   gets(texto);

   for(int i = 0; i< strlen(texto); i++){
        if(texto[i] == 'a'){
            contadorA++;
        }else if(texto[i] == 'e'){
            contadorE++;
        }else if(texto[i] == 'i'){
            contadorI++;
        }else if(texto[i] == 'o'){
            contadorO++;
        }else if(texto[i] == 'u'){
            contadorU++;
        }
    }

    printf("A quantidade de letra A na frase e igual %d \n", contadorA);
    printf("A quantidade de letra E na frase e igual %d \n", contadorE);
    printf("A quantidade de letra I na frase e igual %d \n", contadorI);
    printf("A quantidade de letra O na frase e igual %d \n", contadorO);
    printf("A quantidade de letra U na frase e igual %d ", contadorU);

    return 0;
}
