/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 23:05:48 by engxacom          #+#    #+#             */
/*   Updated: 2024/07/21 23:18:29 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int c);

void	rush0(int X, int Y)
{
	int	x;
	int	y;

	x = -1;
	y = -1;
	if (X == 0 || Y == 0)
		return ;
	while (++y < Y)
	{
		while (++x < X)
		{
			if ((y == 0 && (x == 0 || x == X - 1))
				|| (y == Y - 1 && (x == 0 || x == X - 1)))
				ft_putchar('o');
			else if ((y == 0 && (x != 0 && x != X - 1))
				|| (y == Y - 1 && (x != 0 || x != Y - 1)))
				ft_putchar('-');
			else if ((y != 0 && y != Y - 1) && (x == 0 || x == X - 1))
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		x = -1;
		ft_putchar('\n');
	}
}
