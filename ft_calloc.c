/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilselbon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:59:33 by ilselbon          #+#    #+#             */
/*   Updated: 2022/11/17 16:14:19 by ilselbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		*pointer;
	size_t	i;

	pointer = malloc(nmemb * size);
	i = 0;
	if (pointer != NULL)
	{
		while (i < nmemb)
		{
			pointer[i] = 0;
			i++;
		}
		return (pointer);
	}
	return (NULL);
}	
