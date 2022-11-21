/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilselbon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:59:33 by ilselbon          #+#    #+#             */
/*   Updated: 2022/11/21 17:39:58 by ilselbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char		*pointer;

	if (size <= 0 || nmemb <= 0)
	{
		nmemb = 1;
		size = 1;
	}
	pointer = (void *)malloc(nmemb * size);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, (nmemb * size));
	return ((void *)pointer);
}
