#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

/*int main()
{
    int a = 8;
    int b = 3;
    int div[] = {0};
    int mod[] = {0};
    
    
    printf("before:\ndiv:%d\nmod:%d\n", *div, *mod);
    ft_div_mod(a, b, div, mod);
    printf("after:\ndiv: %d\n mod: %d\n", *div, *mod);  
}*/
