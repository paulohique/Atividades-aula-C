#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    i = 0;
    printf("0 ");
    for (i=2;i<=100;i+=2){
        printf(" %d " , i );
    }
    return 0;
}
