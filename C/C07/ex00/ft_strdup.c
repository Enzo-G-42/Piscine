/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 23:02:05 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/30 19:44:59 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*newstr;

	len = ft_strlen(src) + 1;
	newstr = malloc(len * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		newstr[i] = src[i];
		i++;
	}
	newstr[i] = 0;
	return (newstr);
}
/* 
#include <stdio.h>

int main()
{
	//char *b = NULL;
	printf("%s\n", ft_strdup("123456789"));
} */