/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_pas_fini.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilselbon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:25:12 by ilselbon          #+#    #+#             */
/*   Updated: 2022/11/16 15:10:05 by ilselbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	if (src[i] == '\0')
		dst[i] = '\0';
	else if (ft_strlen(src) < size)
	{
		while (src[i])
		{
			dst[i] = src[i];
			i++;
		}
	}
	else if (size > 0)
	{
		while ((size - 1) != 0)
		{
			dst[i] = src[i];
			size--;
			i++;
		}
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
