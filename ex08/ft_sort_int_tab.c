/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:08:38 by mrharoui          #+#    #+#             */
/*   Updated: 2024/10/23 16:33:02 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	y;
	int	tmp;

	tmp = 0;
	i = 0;
	y = 1;
	while (i < size)
	{
		y = i + 1;
		while (y < size)
		{
			if (tab[i] > tab[y])
				ft_swap(&tab[i], &tab[y]);
			y++;
		}
		i++;
	}
}

/*int main()
{
	int size = 10;
	int tab[] = {14, 12, 25, 78, 35, 79, 89, 56, 90, 76};

	printf("Before fonction: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d, ", tab[i]);
	}
	printf("\n");
	ft_sort_int_tab(tab, size);

	printf("After fonction: ");
        for (int i = 0; i < size; i++)
        {
                printf("%d, ", tab[i]);
        }	
}*/
