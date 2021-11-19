/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <marvin@42lausanne.ch>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 10:41:22 by ski               #+#    #+#             */
/*   Updated: 2021/11/19 10:41:25 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* ************************************************************************** */
char *sk_itoa_recursiv(int value, char *str, size_t *str_len, size_t *i);

/* ************************************************************************** */
char 	*ft_itoa(int n)
{
	char *str;
	size_t str_len;
	size_t i;

	str = NULL;
	
	str_len = 0;
	i = 0;
	str = sk_itoa_recursiv(n, str, &str_len, &i);

	str[str_len] = '\0';
	return (str);
}

/* ************************************************************************** */
char *sk_itoa_recursiv(int value, char *str, size_t *str_len, size_t *i)
{
	int rest;

	if ((0 <= value) & (value <= 9))
	{
		if ((*i) == 0)
		{
			str = (char *) malloc( (*str_len + 1)  * sizeof(char) );
			if (!str)
				return (NULL);
		}
		str[*i] = value + '0';
		(*i)++;

	}
	else
	{
		*str_len += 1;
		rest = value % 10;
		str = sk_itoa_recursiv(rest, str, str_len, i);
	}
	return (str);

}
