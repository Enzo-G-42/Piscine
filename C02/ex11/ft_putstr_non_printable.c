/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 22:35:20 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/21 16:46:28 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	hex[2];
	char	*digit;
	int		i;

	i = 0;
	digit = "0123456789ABCDEF";
	while (str[i] != 0)
	{
		if (str[i] < 32 || str[i] == 127)
		{
			hex[0] = digit[(char)str[i] >> 4];
			hex[1] = digit[(char)str[i] & 0x0F];
			write(1, "\\", 1);
			if (hex[1] >= 'A' && hex[1] <= 'Z')
				hex[1] += 32;
			write(1, hex, 2);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
int main()
{
	char *mabite;
	mabite = "Cou\t\acou\ntu vas bien ?\n";
	ft_putstr_non_printable(mabite);
}*/
/* 
#include <unistd.h>

void	ft_putstr(char *str)
{
	int l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

int		main()
{
	char c[] = "Coucou\ntu vas bien ?";
	ft_putstr("Coucou\\0atu vas bien ?:");
	ft_putstr_non_printable(c);
	char d[] = "\x81\xbe";
	ft_putstr("\n\\81\\be:");
	ft_putstr_non_printable(d);
} */
