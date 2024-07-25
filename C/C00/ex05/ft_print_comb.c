/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:57:10 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/17 21:53:16 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_pute(int i)
{
	i += '0';
	write(1, &i, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_pute(a);
				ft_pute(b);
				ft_pute(c);
				if (a != 7)
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int main()
{
	ft_print_comb();
}*/
