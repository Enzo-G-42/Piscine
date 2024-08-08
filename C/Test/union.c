/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:19:29 by engiacom          #+#    #+#             */
/*   Updated: 2024/08/01 16:43:53 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_2(char *s1, char s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == s2)
			return (1);
		i++;
	}
	return (0);
}

int	check_d(char *str, int j)
{
	int i = 0;
	while (str[i] && i < j)
	{
		if (str[i] == str[j])
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int i = 0;
	int k = 0;
	char test[4096];

	if (argc != 3)
		return(write(1, "\n", 1), 1);
	while (argv[1][i])
	{
		if (check_d(argv[1], i) == 0)
		{
			test[k] = argv[1][i];
			k++;
		}
		i++;
	}
	i = 0;
	while (argv[2][i])
	{
		if (check_2(test, argv[2][i]) == 0)
		{
			test[k] = argv[2][i];
			k++;
		}
		i++;
	}
	test[k] = 0;
	i = 0;
	while (test[i])
	{
		write(1, &test[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
