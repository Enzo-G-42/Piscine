/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:26:18 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/19 01:32:21 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tab1[4096];
	int	size1;

	i = 0;
	size1 = size;
	while (size != 0)
	{
		tab1[i] = tab[size - 1];
		i++;
		size--;
	}
	i = 0;
	while (size1 > 0)
	{
		tab[i] = tab1[i];
		size1--;
		i++;
	}
}
/*
#include <stdio.h>

int     main(void)
{
    int tab[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    int i;

    ft_rev_int_tab(tab, size);

    for (i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return (0);
}*/
