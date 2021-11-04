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

CC 		= gcc
RM		= rm -f

NAME 	= sorakann
CFLAGS 	= -Wall -Wextra -Werror -pedantic

SRC = $(wildcard *.c)

LIBNAME2 = ft
LIBPATH2 = ../libft

# **************************************************************************** #
all: $(NAME)

$(NAME): 
	gcc $(CFLAGS) $(SRC) -L$(LIBPATH2) -l$(LIBNAME2) -o $(NAME)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all