#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    // calculo area cilindro
    // pedir altura e raio
    // calcular em metro
    // informar valor
    int altura, raio;
    float pi, calculo;
    setlocale(LC_ALL, "Portuguese");

    printf("Informe em metros a altura do cilindro: \n");
    scanf("%d",&altura);
    printf("Informe em metros o raio do cilindro: \n");
    scanf("%d",&raio);
    pi = 3.14;
    calculo = 2 * pi * raio * (raio + altura); // 22 * 3,14 * 2 * (4)

    printf("O resultado e: %.2f \n",calculo);
    return 0;
}
