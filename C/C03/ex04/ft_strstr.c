/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:14:02 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/23 19:41:17 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i] != 0)
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != 0)
		{
			j++;
		}
		if (to_find[j] == 0)
			return (&str[i]);
		i++;
	}
	return (0);
}
/* 
#include <stdio.h>

int main()
{
	char a[] = "Hello world!";
	char b[] = " ";

	printf("%s\n", ft_strstr(a, b));
	printf("%s\n", ft_strstr(a, b));
} */