#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
 int val[10], i, j=0;
    val[i] = i;
 for ( i = 0; i < 10; i++) {
    printf("Coloque aqui o %dº número: \n",i + 1);
    scanf("%d",&val[i]);
 }
for ( i = 0; i < 10; i++) {
    if( val[i] % 2 == 0)
    j++;
}

printf("A quantidade de números pares são: %d ",j);



 return 0;
}
