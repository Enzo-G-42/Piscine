/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:55:59 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/28 22:29:39 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
/* 
#include <stdio.h>

int main()
{
	int nb = 10;
	int res = ft_recursive_factorial(nb);
	printf("%d\n", res);
} */