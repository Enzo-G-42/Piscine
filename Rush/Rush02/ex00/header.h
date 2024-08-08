/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 22:58:15 by engiacom          #+#    #+#             */
/*   Updated: 2024/08/04 19:37:58 by aubarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <string.h>

void	ft_write_nbr(char *buffer, int k);
char	*ft_read_file(int fd, const char *search_str);
char	*search_and_print_line(const char *filename, const char *search_str);
int		ft_strlen(char *str);
char	*million(char *str);
void	ft_putstr(char *str);
char	*ft_strstr(char *str, const char *to_find);
char	*million(char *str);
char	*print_milli(char *mill);
void	centaine(char n);
void	unite(char n);
void	ten_to_nineteen(char n, char n2);
void	dizaine(char n);
int		ft_str_is_numeric(char *str);

#endif
