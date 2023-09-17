#include <stdio.h>
#include <locale.h>
int isPrime(int numero) {
    if (numero <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N1,N2;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o 1º valor: ");
    scanf("%d", &N1);
    printf("Digite o 2º valor: ");
    scanf("%d", &N2);

    printf("Números primos entre %d e %d:\n", N1, N2);

    // Loop para verificar e imprimir números primos entre N1 e N2
    for (int i = N1; i <= N2; i++) {
        if (isPrime(i))
            printf("%d ", i);

    }


    return 0;
}
