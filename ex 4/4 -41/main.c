#include <stdio.h>
#include <stdlib.h>

int main()
{
  int v[100];

  for (int i=0; i<100; i++)
    {
    v[i] = i+1;
    printf("%d ",v[i]);
}
    return 0;
}
