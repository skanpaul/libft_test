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

NAME 	= main
CFLAGS 	= -Wall -Wextra -Werror

SRC 	= $(wildcard *.c)
SRC_FT 	= $(wildcard ft*.c)
SRC_HD	= libft.h
FOLDER	= ../libft

NORM	= norminette -R CheckForbiddenSourceHeader 

LIBNAME2 = ft
LIBPATH2 = ../libft

# **************************************************************************** #
all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
#	gcc $(CFLAGS) $(SRC) -L$(LIBPATH2) -l$(LIBNAME2) -o $(NAME)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

# **************************************************************************** #
dtest:
	echo $(SRC)


export:
	cp $(SRC_FT) $(FOLDER)
	cp $(SRC_HD) $(FOLDER)

nono:
	$(NORM) $(SRC_FT)