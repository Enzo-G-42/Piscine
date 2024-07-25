/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 22:10:20 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/24 19:34:06 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_pute(int i)
{
	i += '0';
	write(1, &i, 1);
}

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

void	ft_putnbr(int nb)
{
	int	len;

	len = ft_len(nb);
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	while (len != 0)
	{
		ft_pute(nb / len);
		nb = nb % len;
		len = len / 10;
	}
}
/* 
#include <stdio.h>

int main()
{
	ft_putnbr(-4589);
} */