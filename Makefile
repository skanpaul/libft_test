# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ski <marvin@42lausanne.ch>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/28 09:45:53 by ski               #+#    #+#              #
#    Updated: 2021/10/28 09:46:09 by ski              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sorakann
CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard *.c)
MAIN = main.c

LIBNAME1 = libft.a

LIBNAME2 = ft
LIBPATH2 = ../libft

# **************************************************************************** #
#all: $(NAME)

#$(NAME):
#	gcc $(CFLAGS) -o $(NAME) $(SRC) -L$(LIBPATH2) -l$(LIBNAME2)

all:
	gcc $(CFLAGS) -o $(NAME) $(SRC) -L$(LIBPATH2) -l$(LIBNAME2)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

dall:
	echo $(SRC)