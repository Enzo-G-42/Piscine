/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:26:23 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/23 19:40:59 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (i < nb && src[i])
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = 0;
	return (dest);
}
/* 
#include <stdio.h>

int main()
{
	char dest[] = "1234";
	char src[] = " 456sfjkhbfjafsfagag";
	//unsigned int i = 13;
	
	ft_strncat(dest, src, 5);
	printf("%s\n", dest);
	return (0);
} */