/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 00:41:49 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/18 16:55:30 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_pute(int i)
{
	i += '0';
	write(1, &i, 1);
}

void	ft_ecritfrr(int a, int b, int c, int d)
{
	ft_pute(a);
	ft_pute(b);
	write(1, " ", 1);
	ft_pute(c);
	ft_pute(d);
	if (!(a == 9 && b == 8))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = -1;
	while (++a <= 9)
	{
		b = -1;
		while (++b <= 9)
		{
			c = a;
			d = b + 1;
			while (c <= 9)
			{
				while (d <= 9)
					ft_ecritfrr(a, b, c, d++);
				d = 0;
				c++;
			}
			c = 0;
		}
	}
}
/*
int	main()
{
	ft_print_comb2();
}*/
