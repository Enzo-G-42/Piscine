/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 02:08:57 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/31 21:00:37 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

int	change_value(int nb)
{
	if (nb < 0)
		nb *= -1;
	return (nb);
}
# define ABS(Value) change_value(Value)

#endif