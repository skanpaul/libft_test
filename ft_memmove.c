/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <marvin@42lausanne.ch>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:09:01 by ski               #+#    #+#             */
/*   Updated: 2021/11/04 11:09:07 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* ************************************************************************** */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (src < dst)
	{
		i = len - 1;
		while (i > 0)
		{
			*((char *)dst + i) = *((char *)src + i);
			i--;
		}
		*((char *)dst + i) = *((char *)src + i);
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*((char *)dst + i) = *((char *)src + i);
			i++;
		}
	}
	return (dst);
}

/*
{
	size_t i;
	char *ptr_dst;
	char *ptr_src;
	ptr_dst = (char *)dst;
	ptr_src = (char *)src;
	if (src < dst)
	{
		i = len - 1;
		while (i > 0)
		{
			ptr_dst[i] = ptr_src[i];
			i--;
		}
		ptr_dst[i] = ptr_src[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	}
	return (dst);
}
*/