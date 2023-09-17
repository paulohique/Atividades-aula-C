#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
     setlocale(LC_ALL, "Portuguese");

    int valor, soma = 0, contador = 0;

    printf("Digite valores inteiros positivos (insira um valor negativo para encerrar):\n");

    for (;;) {
        scanf("%d", &valor);

        if (valor < 0) {
            break;
        }

        soma += valor;
        contador++;
    }

    if (contador > 0) {
        float media = (float)soma / contador;
        printf("A média dos valores inseridos é: %.2f\n", media);
    } else {
        printf("Nenhum valor positivo foi inserido.\n");
    }

    return 0;
}
