/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:33:22 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/29 17:11:18 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putnbr(int nb, int len_base)
{
	int	res;
	
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / len_base, len_base);
		ft_putnbr(nb % len_base, len_base);
	}
	else if (nb < 10)
	{
		//printf("%d\n", nb);
		res = nb + 48;
	}
	return (res);
}

int	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;
	int res;
	
	len_base = ft_strlen(base);
	res = ft_putnbr(nbr, len_base);
	//printf("res = [%d]\n", res);
	return (res);
}

int main()
{
	int nb = 2147458;
	char *base = "poneyvif";
	int res = 0;
	//ft_putnbr_base(nb, base);

	printf("%d\n", ft_putnbr_base(nb, base));
	
}