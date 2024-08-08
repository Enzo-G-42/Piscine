# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jercaro <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/04 03:06:28 by jercaro           #+#    #+#              #
#    Updated: 2024/08/04 21:34:30 by jercaro          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= rush-02

all : rush-02

# Parametres de Compilation :
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

# Fichiers source [.c]
source = main.c ft.c ft_2.c search_and_print.c ft_str_is_numeric.c
obj = $(source:.c=.o)

# Règle pour générer les fichiers objets [.o]
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Règle pour générer l'exécutable [rush-02]
rush-02: $(obj)
	$(CC) $(CFLAGS) $^ -o $@

.PHONY: all clean fclean re

all: rush-02

clean:
	rm -rf *.o

fclean: clean
	rm -f rush-02

re: fclean all

