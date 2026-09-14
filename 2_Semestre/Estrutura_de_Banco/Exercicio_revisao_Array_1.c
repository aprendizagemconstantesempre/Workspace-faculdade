#include <stdio.h>
void main()
{
    int x[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        x[i] = i * 2;
        printf("%d\n", x[i]);
    }
}