/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilselbon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:51:25 by ilselbon          #+#    #+#             */
/*   Updated: 2022/11/22 11:38:28 by ilselbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	l;

	l = (char)c;
	i = 1;
	while (*s++)
		i++;
	while (i >= 0)
	{
		if (*s == l)
			return ((char *)s);
		i--;
		s--;
	}
	return (NULL);
}
