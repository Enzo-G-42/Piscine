/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 23:12:26 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/21 23:18:35 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int c);

void	rush1(int X, int Y)
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
			if ((y == 0 && x == 0) || (y == Y - 1 && x == X -1))
				ft_putchar('/');
			else if ((y == 0 && x == X - 1) || (y == Y - 1 && x == 0))
				ft_putchar('\\');
			else if ((y == 0 && (x != 0 && x != X - 1))
				|| (y == Y - 1 && (x != 0 || x != Y - 1))
				|| ((y != 0 && y != Y - 1) && (x == 0 || x == X - 1)))
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		x = -1;
		ft_putchar('\n');
	}
}