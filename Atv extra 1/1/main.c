#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
 int val[10], i, j=0;
    val[i] = i;
 for ( i = 0; i < 10; i++) {
    printf("Coloque aqui o %d� n�mero: \n",i + 1);
    scanf("%d",&val[i]);
 }
for ( i = 0; i < 10; i++) {
    if( val[i] % 2 == 0)
    j++;
}

printf("A quantidade de n�meros pares s�o: %d ",j);



 return 0;
}
