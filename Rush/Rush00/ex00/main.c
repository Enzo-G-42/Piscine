/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 23:05:44 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/21 23:19:59 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c);
void	rush0(int X, int Y);
void	rush1(int X, int Y);
void	rush2(int X, int Y);
void	rush3(int X, int Y);
void	rush4(int X, int Y);

int	ft_atoi(const char *str)
{
	int	i;
	int	moins;
	int	res;

	res = 0;
	moins = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (res);
		else
			res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

int	main(int argc, char **argv)
{
	if (argc != 4 || ft_atoi(argv[1]) > 4)
		return (write(1, "Usage : [Rush Num (0 to 4)] [X] [Y]\n", 36), 1);
	else if (argv[1][0] == '0')
		rush0(ft_atoi(argv[2]), ft_atoi(argv[3]));
	else if (argv[1][0] == '1')
		rush1(ft_atoi(argv[2]), ft_atoi(argv[3]));
	else if (argv[1][0] == '2')
		rush2(ft_atoi(argv[2]), ft_atoi(argv[3]));
	else if (argv[1][0] == '3')
		rush3(ft_atoi(argv[2]), ft_atoi(argv[3]));
	else if (argv[1][0] == '4')
		rush4(ft_atoi(argv[2]), ft_atoi(argv[3]));
	return (0);
}
