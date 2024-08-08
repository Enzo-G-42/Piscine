/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 20:09:56 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/28 20:37:13 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	if (ft_is_prime(nb))
		return (nb);
	else
	{
		while (!(ft_is_prime(nb + i)))
		{
			i++;
		}
		return (nb + i);
	}
}
/* 
#include <stdio.h>

int main()
{
	int x = ft_find_next_prime(12);
	printf("%d\n", x);
} */