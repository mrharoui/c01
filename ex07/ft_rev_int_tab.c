/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:40:05 by mrharoui          #+#    #+#             */
/*   Updated: 2024/10/23 15:54:44 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	y;

	i = 0;
	y = size - 1;
	while (i < (size / 2))
	{
		ft_swap(&tab[i], &tab[y]);
		y--;
		i++;
	}
}

/*int main()
{
	int size = 10;
	int tab[] = {12, 14, 25, 78, 89, 79, 56, 89, 90, 76};

	printf("Before fonction: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d, ", tab[i]);
	}
	printf("\n");
	ft_rev_int_tab(tab, size);

	printf("After fonction: ");
        for (int i = 0; i < size; i++)
        {
                printf("%d, ", tab[i]);
        }	
}*/
