#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    // leia o salario
    // retorne valor ferias
    // f�rias * 1/3
    int salario;
    float ferias;
    setlocale(LC_ALL, "Portuguese");

    printf("Informe o seu sal�rio: \n");
    scanf("%d",&salario);
     ferias = salario + (salario * 1.00/3.00);

    printf("O resultado �: %.3f \n",ferias);
    return 0;
}
