/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 15:44:47 by engiacom          #+#    #+#             */
/*   Updated: 2024/08/04 16:10:28 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	centaine(char n)
{
	char	send[3];

	send[0] = n;
	send[1] = ':';
	send[2] = 0;
	if (!(search_and_print_line("numbers.dict", send)))
	{
		send[1] = ' ';
		search_and_print_line("numbers.dict", send);
	}
	search_and_print_line("numbers.dict", "100");
	return ;
}

void	unite(char n)
{
	char	send[3];

	send[0] = n;
	send[1] = ':';
	send[2] = 0;
	if (!(search_and_print_line("numbers.dict", send)))
	{
		send[1] = ' ';
		search_and_print_line("numbers.dict", send);
	}
	return ;
}

void	ten_to_nineteen(char n, char n2)
{
	char	send[4];

	send[0] = n;
	send[1] = n2;
	send[2] = ':';
	send[3] = 0;
	if (!(search_and_print_line("numbers.dict", send)))
	{
		send[2] = ' ';
		search_and_print_line("numbers.dict", send);
	}
	return ;
}

void	dizaine(char n)
{
	char	send[4];

	send[0] = n;
	send[1] = '0';
	send[2] = ':';
	send[3] = 0;
	if (!(search_and_print_line("numbers.dict", send)))
	{
		send[2] = ' ';
		search_and_print_line("numbers.dict", send);
	}
	return ;
}
