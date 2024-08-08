/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:28:06 by engiacom          #+#    #+#             */
/*   Updated: 2024/08/08 16:05:59 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	c_w(char *str)
{
	int i = 0;
	int c = 0;

	while (str[i])
	{
		while (str[i] == 32 && str[i])
			i++;
		if (str[i] != 32 && str[i] != 0)
			c++;
			while (str[i] != 32 && str[i] != 0)
				i++;
		
	}
	return (c);
}

char **ft_split(char *str)
{
	int i = 0;
	int cw = c_w(str);
	char **fdp;
	int len = 0;
	int x = 0;
	int j = 0;
	
	fdp = (char **)malloc(sizeof(char *) * (cw + 1));
	while (str[i] && cw > 0)
	{
		while (str[i] == 32 && str[i])
			i++;
		while(str[i + len] != 32 && str[i + len] != 0)
		{
			len++;
		}
		if (len > 0)
		{
			len--;
			fdp[x] = malloc(sizeof(char) * (len + 1));
		}
		while(str[i] != 32 && str[i] != 0)
		{
			fdp[x][j] = str[i];
			i++;
			j++;
			if (j > len)
			{	
				fdp[x][j] = 0;
				x++;
			}
			
		}
		len = 0;
		j = 0;
	}
	fdp[x] = NULL;
	return (fdp);
}
#include <stdio.h>


int main()
{
	char *b = "  bite sur ta tete ";
	char **tab = ft_split(b);
	int i = 0;
	
	while(i < 5)
	{
		printf("%s\n", tab[i]);
		i++;
	}
}