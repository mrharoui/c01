/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:33:20 by mrharoui          #+#    #+#             */
/*   Updated: 2024/10/23 15:33:48 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
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
