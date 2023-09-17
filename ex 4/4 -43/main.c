#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i,j[10],numero,odio=0;
    for(int i=1;i<=10;i++){
        j[i]=rand()%20;
    }
    printf("Coloque aqui o numero: \n");
    scanf("%d",&numero);
    for (int i=1;i<=10;i++){
    if(numero == j[i])
        odio=1;
        break;
    }

    if (odio == 1)
        printf("Possui o número");
    else
        printf("Não possui o número");

    return 0;
}
