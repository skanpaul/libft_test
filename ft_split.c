/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <marvin@42lausanne.ch>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:30:39 by ski               #+#    #+#             */
/*   Updated: 2021/11/16 13:30:44 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* ************************************************************************** */
static int	sk_ischar(char c_in, char c_cmp);

/* ************************************************************************** */
char	**ft_split(char const *s, char c)
{
	size_t	w;
	size_t	w_len;
	size_t	i;
	size_t	i_old;
	char	**str_array;
	char	*new;
	char	set[2];

	set[0] = c;
	set[1] = '\0';
	/* -------------------------------------- */
	new = ft_strtrim(s, set);
	if (!new)
		return (NULL);
	/* -------------------------------------- */
	w = 0;
	i = 0;
	while (new[i] != '\0')
	{
		if ((!sk_ischar(new[i], c))
			& ((sk_ischar(new[i + 1], c)) | (!new[i + 1])))
			w++;
		i++;
	}
	/* -------------------------------------- */
	str_array = (char **)malloc((w + 1) * sizeof(char *));
	if (!str_array)
	{
		free(new);
		return (NULL);
	}
	str_array[w] = NULL;
	/* -------------------------------------- */
	w = 0;
	i_old = 0;
	i = 0;
	while (new[i] != '\0')
	{
		if ((!sk_ischar(new[i], c))
			& ((sk_ischar(new[i + 1], c)) | (!new[i + 1])))
		{
			w_len = i - i_old + 1;
			str_array[w] = ft_substr(new, i_old, w_len);
			w++;
		}
		if ((sk_ischar(new[i], c)) & (!sk_ischar(new[i + 1], c)))
			i_old = i + 1;
		i++;
	}
	/* -------------------------------------- */
	free(new);
	return (str_array);
}

/* ************************************************************************** */
static int	sk_ischar(char c_in, char c_cmp)
{
	if (c_in == c_cmp)
		return (1);
	return (0);
}
