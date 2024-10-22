/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:25:05 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/10/22 11:38:22 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int 	i;
	unsigned int 	len;

	len = ft_strlen(src);
	i = 0;
	while(src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
	if(i < size)
	{
		dest[i] = '\0';
	}
	while(src[i])
	{
		i++;
	}
	return (i);
}



