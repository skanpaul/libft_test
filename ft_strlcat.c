/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <marvin@42lausanne.ch>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:49:50 by ski               #+#    #+#             */
/*   Updated: 2021/11/09 11:49:53 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* ************************************************************************** */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len_init;

	dst_len_init = ft_strlen(dst);
	if (dstsize == 0)
		return (ft_strlen(src));
	if ((dstsize > dst_len_init) && (dstsize - dst_len_init >= 1))
	{
		j = dst_len_init;
		i = 0;
		while (i < (dstsize - dst_len_init - 1))
		{
			dst[j + i] = src[i];
			i++;
		}
		dst[j + i] = '\0';
	}
	if (dstsize >= dst_len_init)
		return (ft_strlen(src) + dst_len_init);
	else
		return (ft_strlen(src) + dstsize);
}
