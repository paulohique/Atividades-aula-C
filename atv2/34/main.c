#include <stdio.h>
#include<locale.h>>
int main() {
setlocale(LC_ALL, "Portuguese");
    float numero,resultado, soma = 0;

    for (int i = 1; i <= 20; i++) {
        printf("Digite o %d� n�mero: ", i);
        scanf("%f", &numero);
        soma= soma + numero;

    }
     resultado = soma / 20 ;
    printf("O resultado � %.2f",resultado);

    return 0;
}
