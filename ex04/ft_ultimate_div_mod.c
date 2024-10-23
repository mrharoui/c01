/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:07:10 by mrharoui          #+#    #+#             */
/*   Updated: 2024/10/23 15:34:47 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}

/*int main()
{
	int a[] = {24};
	int y[] = {12};

	printf("value of a before function= %d\n", *a);
        printf("value of y before function= %d\n", *y);

	ft_ultimate_div_mod(a, y);

	printf("value of a after function= %d\n", *a);
	printf("value of y after function= %d\n", *y);
	return (0);
}*/
