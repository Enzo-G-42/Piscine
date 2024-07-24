/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 19:05:47 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/21 16:46:06 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (src[n] != 0)
	{
		while (i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		n++;
	}
	while (i < size)
	{
		dest[i] = 0;
		i++;
	}
	dest[i] = 0;
	return (n);
}
/*
#include <stdio.h>

int main()
{
	char src[] = "Hello there, Venus";
	char dest[4096];
	unsigned int i = 15;
	unsigned int j;
	j = ft_strlcpy(dest, src, i);
	printf("SRC = '%s'\nDEST = '%s'\nlen = '%d'\n", src, dest, j);

}*/
