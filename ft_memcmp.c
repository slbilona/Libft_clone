/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilselbon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:32:01 by ilselbon          #+#    #+#             */
/*   Updated: 2022/11/17 17:26:53 by ilselbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*p1;
	const char	*p2;
	size_t		i;

	i = 0;
	p1 = (const char *) s1;
	p2 = (const char *) s2;
	if (n > 0)
	{
		while (i < n)
		{
			if (p1[i] != p2[i])
				return (p2[i] - p1[i]);
			i++;
		}
	}
	return (0);
}
