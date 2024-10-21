#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
    int *nbr1 = NULL;
    int **nbr2 = NULL;
    int ***nbr3 = NULL;
    int ****nbr4 = NULL;
    int *****nbr5 = NULL;
    int ******nbr6 = NULL;
    int *******nbr7 = NULL;
    int ********nbr8 = NULL;

    *********nbr = ********nbr8;
    ********nbr8 = *******nbr7;
    *******nbr7 = ******nbr6;
    ******nbr6 = *****nbr5;
    *****nbr5 = ****nbr4;
    ****nbr4 = ***nbr3;
    ***nbr3 = **nbr2;
    **nbr2 = *nbr1;
    *nbr1 = 42;
}

int main()
{
    int *nbr1 = NULL;
    int **nbr2 = NULL;
    int ***nbr3 = NULL;
    int ****nbr4 = NULL;
    int *****nbr5 = NULL;
    int ******nbr6 = NULL;
    int *******nbr7 = NULL;
    int ********nbr8 = NULL;
    int *********nbr9 = NULL;

    *********nbr9 = ********nbr8;
    ********nbr8 = *******nbr7;
    *******nbr7 = ******nbr6;
    ******nbr6 = *****nbr5;
    *****nbr5 = ****nbr4;
    ****nbr4 = ***nbr3;
    ***nbr3 = **nbr2;
    **nbr2 = *nbr1;
    *nbr1 = 23;


    ft_ultimate_ft(nbr9);
    printf("%d\n", *********nbr9);
}
