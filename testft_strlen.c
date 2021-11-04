/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testft_strlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <marvin@42lausanne.ch>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:00:41 by ski               #+#    #+#             */
/*   Updated: 2021/11/04 16:00:45 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libft_test.h"

#include <string.h>
/* ************************************************************************** */

int testft_strlen(void)
{
	char text[20];


	strcpy(text, "");
	printf("ft_strlen | string: %s | result: %zu vs %zu:official \n", 
					text, ft_strlen(text), strlen(text));
	if(ft_strlen(text) != strlen(text))
		{
			printf("\n - - !!! ERROR ERROR ERROR ERROR !!! - -\n\n");
			return (1);
		}

	strcpy(text, "bonjour");
	printf("ft_strlen | string: %s | result: %zu vs %zu:official \n", 
					text, ft_strlen(text), strlen(text));
	if(ft_strlen(text) != strlen(text))
		{
			printf("\n - - !!! ERROR ERROR ERROR ERROR !!! - -\n\n");
			return (1);
		}


	return (0);
}