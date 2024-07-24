/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 23:50:55 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/19 01:34:30 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	tmp_size;

	i = 0;
	tmp = 0;
	tmp_size = size;
	while (size > 0)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
			size = tmp_size;
		}
		i++;
		size--;
	}
}
/*
#include <stdio.h>

int     main(void)
{
    int tab[6] = {4, 8, 5, 3, 9, 2};
    int size = 6;
    int i;

    ft_sort_int_tab(tab, size);

    for (i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}*/
