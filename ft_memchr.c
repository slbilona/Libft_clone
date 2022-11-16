/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilselbon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:16:15 by ilselbon          #+#    #+#             */
/*   Updated: 2022/11/10 12:45:59 by ilselbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr( const void *s, int c, size_t n)
{
	const unsigned char	*src;
	size_t				i;

	src = (const unsigned char *) s;
	i = 0;
	while (i <= n)
	{
		if (src[i] == c)
			return ((void *) &src[i]);
		i++;
	}
	return (NULL);
}
