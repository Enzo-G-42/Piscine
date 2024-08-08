/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:39:21 by engiacom          #+#    #+#             */
/*   Updated: 2024/08/04 19:37:04 by aubarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_strstr(char *str, const char *to_find)
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

char	*million(char *str)
{
	int		i;
	int		len;
	char	*mill;

	i = 1;
	len = ft_strlen(str);
	if (len % 3 != 1)
	{
		if (len % 3 == 2)
			len--;
		else
			len -= 2;
	}
	mill = malloc(sizeof(char) * len + 1);
	mill[0] = '1';
	while (len - 1 != 0)
	{
		mill[i] = '0';
		i++;
		len--;
	}
	mill[i] = 0;
	return (mill);
}

char	*print_milli(char *mill)
{
	int	len;

	len = ft_strlen(mill);
	search_and_print_line("numbers.dict", mill);
	len -= 3;
	mill[len] = 0;
	return (mill);
}
