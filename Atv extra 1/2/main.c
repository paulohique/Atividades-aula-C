#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int val[10], i, j = INT_MIN, u = INT_MAX;
    val[i] = i;
    for (i = 0; i < 10; i++) {
        printf("Coloque aqui o %d� n�mero: \n", i + 1);
        scanf("%d", &val[i]);
    }

    for (i = 0; i < 10; i++) {
        if (val[i] > j)
            j = val[i];
        if (val[i] < u)
            u = val[i];
    }

    printf("Maior n�mero �: %d\n", j);
    printf("Menor n�mero �: %d\n", u);

    return 0;
}
