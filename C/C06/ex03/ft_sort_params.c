/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 20:08:07 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/24 22:57:45 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **av, int j)
{
	char *b;

	b = av[j];
	av[j] = av[j + 1];
	av[j + 1] = b;
	printf("AV 1 = %s\n", av[1]);
	printf("AV 2 = %s\n", av[2]);
	printf("AV 3 = %s\n", av[3]);
	printf("AV 4 = %s\n", av[4]);
}

void	ft_print(int ac, char **av)
{
	int j;
	int i;
	
	j = 1;
	while(j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			write(1, &av[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*b;

	j = 1;
	while (j < ac)
	{
		if(av[j][i] != 0 && j < ac - 1)
		{
			if (av[j][i] > av[j + 1][i] || (av[j + 1] == 0 || av[j] == 0))
			{
				ft_swap(av, j);
				j = 1;
			}
			else
				i++;
		}
		else if (j < ac)
		{
			j++;
			i = 0;
		}
		else
			break;
	}
	ft_print(ac, av);
}
