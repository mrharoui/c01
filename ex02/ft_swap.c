#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

/*int main()
{
    int a = 42;
    int b = 24;
    ft_swap(&a, &b);

    printf("a: %d\n b: %d\n", a, b);
}*/
