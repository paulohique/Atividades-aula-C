#include <stdio.h>
#include <stdlib.h>

int main()
{
int i=0,peso,idade,fx1=0,fx2=0,fx3=0,fx4=0,pesofx1 = 0,pesofx2 = 0,pesofx3 = 0,pesofx4 = 0,resultado1,resultado2,resultado3,resultado4;



for( i=0; i<=20; i++){
    printf("Coloque aqui sua idade: \n");
    scanf("%d",&idade);
    printf("Coloque aqui seu peso: \n");
    scanf("%d",&peso);

if(idade == 1 && idade <=10){
    pesofx1 = pesofx1 + peso;
    fx1++;
} else if(idade >=11 && idade<=20){
    pesofx2 = pesofx2 + peso;
    fx2++;
} else if(idade >= 21 && idade <= 30) {
    pesofx3 = pesofx3 + peso;
    fx3++;
}else if(idade >= 30){
    pesofx4 = pesofx4 + peso;
    fx4++;
}

}
resultado1 = pesofx1 / fx1;
resultado2 = pesofx2 / fx2;
resultado3 = pesofx3 / fx3;
resultado4 = pesofx4 / fx4;
printf("O resultado da 1º faixa etaria é:  %d\n",resultado1);
printf("O resultado da 2º faixa etaria é:  %d\n",resultado2);
printf("O resultado da 3º faixa etaria é:  %d\n",resultado3);
printf("O resultado da 4º faixa etaria é:  %d\n",resultado4);
return 0;
}


