#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
        int n1,n2,n3,result;


    // * n1 com n2
    // do resultado  subtrair n3

    printf("Coloque aqui o primeiro numero: \n");
        scanf("%d",&n1);
    printf("Coloque aqui o segundo numero: \n");
        scanf("%d",&n2);
    printf("Coloque aqui o terceiro numero: \n");
        scanf("%d",&n3);

        result = (n1 * n2) - n3;
    if(result >= 0){
        printf("O resultado é %d",result);
    }else {
        printf("O resultado é %d",result);
    }
    return 0;
}
