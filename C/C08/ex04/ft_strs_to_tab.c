/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 21:18:11 by engiacom          #+#    #+#             */
/*   Updated: 2024/08/06 13:39:24 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*info;

	i = 0;
	info = malloc((ac + 1) * sizeof(t_stock_str));
	if (info == NULL)
		return (NULL);
	while (i < ac)
	{
		info[i].size = ft_strlen(av[i]);
		info[i].str = ft_strdup(av[i]);
		info[i].copy = ft_strdup(av[i]);
		i++;
	}
	return (info);
}
/* 
 int main(int argc, char **argv)
{
	int i;
	t_stock_str *result;

	if (argc < 2)
	{
		printf("Please provide some arguments.\n");
		return (1);
	}

	result = ft_strs_to_tab(argc - 1, argv + 1);
	if (result == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}

	for (i = 0; i < argc - 1; i++)
	{
		printf("Size: [%d]\n", result[i].size);
		printf("Str: [%s]\n", result[i].str);
		printf("Copy: [%s]\n", result[i].copy);
	}

	// Free allocated memory
	for (i = 0; i < argc - 1; i++)
	{
		free(result[i].str);
		free(result[i].copy);
	}
	free(result);

	return (0);
} */
