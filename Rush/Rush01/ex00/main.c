/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 21:38:48 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/28 21:41:00 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_arg(char *str)
{
	int	i;
	int	four;
	int	one;
	int	digit;

	digit = 0;
	i = 0;
	while (str[i++])
	{
		if (str[i] >= '0' && str[i] <= '9')
			digit++;
		if (str[i] == '4')
			four++;
		if (str[i] == '1')
			one++;
		if (one == 2 || four == 2)
			return (1);
		if (digit == 4)
		{
			one = 0;
			four = 0;
			digit = 0;
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	arg[4][4];
	int	i;
	int	j;
	int	k;
	int	digit;

	(void)argc;
	if (check_arg(argv[1]))
		return (1);
	k = 0;
	i = 0;
	j = 0;
	digit = 0;
	while (argv[1][k++])
	{
		if (argv[1][k] >= '0' && argv[1][k] <= '9')
		{
			arg[j][i++] = argv[1][k] - 48;
			if (i == 4)
			{
				i = 0;
				j++;
			}
		}
	}
}
