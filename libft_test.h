/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <marvin@42lausanne.ch>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:42:06 by ski               #+#    #+#             */
/*   Updated: 2021/11/08 13:42:09 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_TEST_H
# define LIBFT_TEST_H
# include "libft_test.h"
# include "sk_lib.h"

/* ************************************************************************** */

void	test_test(void);

int		testft_isalpha(void);
int		testft_isdigit(void);
int		testft_isalnum(void);
int		testft_isascii(void);
int		testft_isprint(void);
int		testft_strlen(void);
void	testft_memset(void);	/* NE RETOURNE PAS D ERREUR */
void	testft_bzero(void);		/* NE RETOURNE PAS D ERREUR */
void	testft_memcpy(void);	/* NE RETOURNE PAS D ERREUR */
void	testft_memmove(void);	/* NE RETOURNE PAS D ERREUR */
void	testft_strlcpy(void);	/* NE RETOURNE PAS D ERREUR */
void 	testft_strlcat(void);

void	testft_toupper(void);
void	testft_tolower(void);
void	testft_strchr(void);
void	testft_strrchr(void);
void	testft_strncmp(void);
void	testft_memchr(void);
void	testft_memcmp(void);
void	testft_strnstr(void);
void	testft_atoi(void);

void	testft_calloc(void);
// void	testft_strdup(void);
/* ----------------------------------------*/
void	testft_substr(void);
void	testft_strjoin(void);
void	testft_strtrim(void);
void	testft_split(void);
void	testft_itoa(void);
void	testft_strmapi(void);

void	testft_putnbr_fd(void);

/* ----------------------------------------*/
// void	testft_lstnew(void);
void	testft_lstadd_front(void);
// void	testft_lstsize(void);
void	testft_lstlast(void);
void	testft_lstadd_back(void);

/* ************************************************************************** */
#endif
