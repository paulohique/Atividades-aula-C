#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
        int i;
        int Numeros[5];
    
    for (i = 0;i<5;i++)
    {
        printf("Digite um numero\n");
        scanf("%d", &Numeros[i]);
        printf("\n");

    }
    printf("Os números em ordem inversa ficam:\n");
    for (i = 4; i >= 0; i--)
    {
        printf(" %d ", Numeros[i]);
    }
    return 0;
}
