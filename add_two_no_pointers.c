#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int *p = &a, *q = &b;

    printf("Sum = %d", *p + *q);

    return 0;
}
