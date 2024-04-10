#include <stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");
   
   int lado1, lado2, area, potenciaIluminacao;

   printf("Digite o tamanho de uma dos lados do comodo em metros: ");
   scanf("%d", &lado1);
   printf("Digite o tamanho do outro lado do comodo em metros: ");
    scanf("%d", &lado2);

    area = lado1 * lado2;
    potenciaIluminacao = area * 18;

    printf("A área do comodo é %d m² e a potência para iluminação é %d Watts", area, potenciaIluminacao);

    return 0;
}
