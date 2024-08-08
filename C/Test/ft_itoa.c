/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 19:14:14 by engiacom          #+#    #+#             */
/*   Updated: 2024/08/07 14:07:50 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


int	ft_len(int n)
{
	int	len;

	len = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		len = len * 10;
	}
	return (len);
}

char *ft_putnbr(int nb)
{
	int	len;
	char *tmp;
	int i = 0;
	char *int_max = "-2147483648";

	tmp = malloc(sizeof(char) * 12);
	tmp[0] = 0;
	len = ft_len(nb);
	if (nb == -2147483648)
		return (int_max);
	if (nb < 0)
	{
		i++;
		tmp[0] = '-';
		nb = nb * -1;
	}
	while (len != 0)
	{
		tmp[i] = (nb / len) + 48;
		nb = nb % len;
		len = len / 10;
		i++;
	}
	tmp[i] = 0;
	return (tmp);
}

char	*ft_itoa(int nbr)
{
	int len = 0;
	int i = 0;
	char *res;
	char *tmp;

	tmp = ft_putnbr(nbr);
	while (tmp[i])
		i++;
	res = malloc(sizeof(char) * i);
	i = 0;
	while(tmp[i])
	{
		res[i] = tmp[i];
		i++;
	}
	res[i] = 0;
	return (res);
}

int main()
{
	printf("%s\n", ft_itoa(2147483647));
}