/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 19:48:50 by engiacom          #+#    #+#             */
/*   Updated: 2024/08/06 19:54:34 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int c = 0;

	while (argv[1][i])
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			c = (argv[1][i] - 'a') + 1;
			while (c > 0)
			{
				write(1, &argv[1][i], 1);
				c--;
			}
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			c = (argv[1][i] - 'A') + 1;
			while (c > 0)
			{
				write(1, &argv[1][i], 1);
				c--;
			}
		}
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}