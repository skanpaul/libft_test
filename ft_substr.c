/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <marvin@42lausanne.ch>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:24:30 by ski               #+#    #+#             */
/*   Updated: 2021/11/13 16:24:33 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* ************************************************************************** */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*ptr;

	ptr = (char *) malloc ((len + 1) * sizeof(char));
	if (ptr == 0)
		return (0);
	ptr[len - 1] = '\0';

	j = 0;
	while ((s[start + j] != '\0') & (j < len ))
	{
		ptr[j] = s[start + j];
		j++;
	}
	return (ptr);
}

/*

Description
Alloue avec malloc(3) et retourne une chaine de caractères issue de la chaine ’s’.
Cette nouvelle chaine commence à l’index ’start’ et a pour taille maximale ’len’

Paramètres
s 		= La chaine de laquelle extraire la nouvelle chaine
start 	= L’index de début de la nouvelle chaine dans la chaine ’s’.
len 	= La taille maximale de la nouvelle chaine.

Valeur de retour
- The nouvelle chaine de caractere. 
- NULL si l’allocation échoue.

*/