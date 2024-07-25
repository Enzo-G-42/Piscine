/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:26:21 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/23 19:41:37 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] && j < size)
		j++;
	if (j == size)
		return (ft_strlen(src) + size);
	while (j + i < size - 1 && src[i])
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = 0;
	return (j + ft_strlen(src));
}
/* 
#include <stdio.h>

int main()
{
	char dest[] = "12fggadgagadgz";
	char src[] = "5678sfjkhbfjafsfagag";
	//unsigned int i = 13;
	
	printf("%d\n", ft_strlcat(dest, src, 8));
	//printf("%s\n", dest);
	//printf("[%c]\n", dest[8]);
	return (0);
} */