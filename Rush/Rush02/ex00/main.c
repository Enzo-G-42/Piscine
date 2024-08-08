/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 17:16:39 by engiacom          #+#    #+#             */
/*   Updated: 2024/08/04 23:03:46 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	the_one(char *av, char *mill, int i)
{
	int	n;

	n = 0;
	while (i != 0)
	{
		if (i % 3 == 0 && av[n] != '0')
			centaine(av[n]);
		else if (i % 3 == 1)
		{
			if (av[n - 1] != '1' && av[n] != '0')
				unite(av[n]);
			if (mill[1] != 0 )
				mill = print_milli(mill);
		}
		else
		{
			if (av[n] == '1')
				ten_to_nineteen(av[n], av[n + 1]);
			else if (av[n] != '0')
				dizaine(av[n]);
		}
		n++;
		i--;
	}
}

int	main(int argc, char **argv)
{
	int			i;
	char		*mill;

	if (argc - 1 == 1 || argc - 1 == 2)
	{
		if (ft_str_is_numeric(argv[1]) != 1)
		{	
			write(1, "Error\n", 6);
			return (1);
		}
		i = ft_strlen(argv[argc - 1]);
		if (i > 39)
		{
			write(1, "Error\n", 6);
			return (1);
		}
		mill = million(argv[argc - 1]);
		the_one(argv[argc - 1], mill, i);
		free(mill);
	}
}
