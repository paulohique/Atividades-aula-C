#include <stdio.h>
#include<locale.h>>
int main() {
setlocale(LC_ALL, "Portuguese");
    int numero, maior, menor;

       printf("Digite o 1� n�mero: ");
    scanf("%d", &numero);
    maior = numero;
    menor = numero;

    for (int i = 2; i <= 10; i++) {
        printf("Digite o %d� n�mero: ", i);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }
    }

    printf("O maior n�mero �: %d\n", maior);
    printf("O menor n�mero �: %d\n", menor);

    return 0;
}
