#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nbr)
{
    if (nbr < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nbr);
    }
    else if (nbr > 9)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else
        ft_putchar(nbr + '0');
}

// pour afficher de 1234 au deux dernier chiffre
void    ft_output_fpart(int n)
{
    int i = 0;
    int first_numbers;

    first_numbers = n - 2;
    while (i < first_numbers)
    {
        ft_putnbr(i);
        i++;
    }
}

void ft_print_combn(int n)
{
    int x = n - 2;
    int y = 0;
    
    while (x <= 8)
    {
        y = x + 1;
        while (y <= 9)
        {
            ft_output_fpart(n);
            ft_putchar(x + '0');
            ft_putchar(y + '0');
            if (y < 7 || x < 8)
                write(1, ", ", 2);
            y++;
        }
        x++;
    }
}

int main()
{
    ft_print_combn(2);
    return (0);
}
