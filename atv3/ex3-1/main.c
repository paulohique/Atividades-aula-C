#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salario,vaTotal=0,vaTotal2=0,aumento=0,maisDois=0,r1=0,total=0,soma = 0;
    int i;
    // ler salário 100 funcionario
    for(i=1;i<=100; i++){
        printf("Coloque aqui o %dº salário: \n",i);
        scanf("%f",&salario);
        //quantos recebem mais de 2000

    if(salario > 2000){
        r1++;
        vaTotal += salario;
    }else{
        maisDois =  salario * 1.075;
        aumento += maisDois;
        vaTotal2 += salario;
    }
    //quanto sai para a empresa com o salario (valor total dos salários)
    total = vaTotal2 + vaTotal;


        //quanto sairia para a empregar se desse aumento de 7,5% para quem recebe menos que 2000

    }

    printf("São %.0f funcionarios que recebem mais que 2000 R$.\n",r1);
    printf("O valor total gasto com os funcionários é: %.2f .\n",total);
    printf("Com o aumento dos funcionarios que recebem menos de 2000 a empresa gastaria: %.2f R$.",aumento);

    return 0;
}
