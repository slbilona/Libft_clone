/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilselbon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:27:39 by ilselbon          #+#    #+#             */
/*   Updated: 2022/11/16 15:38:16 by ilselbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset( void *str, int c, size_t n)
{
	size_t	i;
	char	*t;

	t = (char *) str;
	i = 0;
	while (i <= n)
	{
		t[i] = c;
		i++;
	}
	return (str);
}

void	bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
