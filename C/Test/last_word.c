/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:53:44 by engiacom          #+#    #+#             */
/*   Updated: 2024/08/06 19:11:49 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	while (argv[1][i])
	{
		i++;
	}
	i -= 1;
	while (i > 0)
	{
		while (argv[1][i] == 32 || argv[1][i] == '\t' || argv[1][i] == '\v')
			i--;
		while (argv[1][i] != 32 && argv[1][i] != '\t' && argv[1][i] != '\v' && i > 0)
			i--;
		i += 1;
		while (argv[1][i] != 32 && argv[1][i] != '\t' && argv[1][i] != '\v' && argv[1][i] != 0)
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		if (argv[1][i] == 32 || argv[1][i] == '\t' || argv[1][i] == '\v' || argv[1][i] == 0)
			break;
	}
	write(1, "\n", 1);
	return (0);
}

/* #include <unistd.h>

int		ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1])
			av[1]++;
		av[1]--;
		while (ft_isblank(*av[1]))
			av[1]--;
		while (*av[1] && !ft_isblank(*av[1]))
			av[1]--;
		av[1]++;
		while (*av[1] && !ft_isblank(*av[1]))
			write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
} */