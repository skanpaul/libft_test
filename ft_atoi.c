/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <marvin@42lausanne.ch>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:00:49 by ski               #+#    #+#             */
/*   Updated: 2021/11/12 11:00:52 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* ************************************************************************** */
static int	ft_isspace(int c);

/* ************************************************************************** */
int	ft_atoi(const char *str)
{
	size_t		i;
	long long	sign;
	long long	value;

	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if ((str[i] == '-') | (str[i] == '+'))
	{
		if (str[i] == '-')
			sign = (-1);
		i++;
	}
	value = 0;
	while ((str[i] != '\0') & ft_isdigit(str[i]))
	{
		// printf("index: %zu | long long value %lld | value: %d\n", i, value, (int)value);
		// sk_printmem(&value, 24);
		value = value * 10 + (str[i] - 48);
		// if ((value > 922337203685477579) & (str[i + 1] != '\0') & ft_isdigit(str[i + 1]))
		// 	return (-1);
		i++;
	}
	value *= sign;
	return (value);
}

/* ************************************************************************** */
static int	ft_isspace(int c)
{
	if ((c == '\t') | (c == '\n') | (c == '\v')
		| (c == '\f') | (c == '\r') | (c == ' '))
		return (1);
	return (0);
}
