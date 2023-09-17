#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    // leia o salario
    // retorne valor ferias
    // férias * 1/3
    int salario;
    float ferias;
    setlocale(LC_ALL, "Portuguese");

    printf("Informe o seu salário: \n");
    scanf("%d",&salario);
     ferias = salario + (salario * 1.00/3.00);

    printf("O resultado é: %.3f \n",ferias);
    return 0;
}
