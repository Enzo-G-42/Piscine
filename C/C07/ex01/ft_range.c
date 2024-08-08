/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:28:10 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/30 19:47:14 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		tab = NULL;
		return (NULL);
	}
	tab = malloc((max - min) * sizeof(int));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i + min < max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/* 
#include <stdio.h>

int main()
{
	int *tab = ft_range(-3, 11);
	int i = 0;
	if (tab == NULL)
	{
		printf("NULL");
		return (0);
	}
	while (i < 14)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	printf("\n");
} */