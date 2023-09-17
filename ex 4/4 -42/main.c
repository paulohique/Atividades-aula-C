#include <stdio.h>
#include <stdlib.h>
int main()
{
    int const N  = 70;
    int array[N];
    int i;

    for (i = 0; i < N; i++)
    {
        if (i % 3 == 0)
        {
            array[i] = 10;
        }
        else
        {
            array[i] = i * 10;
        }
    }
    for (i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }

 return 0;
}
