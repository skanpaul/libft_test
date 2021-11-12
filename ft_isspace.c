/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <marvin@42lausanne.ch>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:04:52 by ski               #+#    #+#             */
/*   Updated: 2021/11/12 14:04:56 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* ************************************************************************** */
int	ft_isspace(int c)
{
	if ((c == '\t') | (c == '\n') | (c == '\v')
		| (c == '\f') | (c == '\r') | (c == ' '))
		return (1);
	return (0);
}
