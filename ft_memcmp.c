/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilselbon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:32:01 by ilselbon          #+#    #+#             */
/*   Updated: 2022/11/22 17:54:20 by ilselbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*p1;
	const char	*p2;
	size_t		i;

	if(s1 && s2 && n > 0)
	{
		i = 0;
		p1 = (const char *) s1;
		p2 = (const char *) s2;
		while (i < n)
		{
			if (p1[i] != p2[i])
				return (p2[i] - p1[i]);
			i++;
		}
	}
	else if(n <= 0)
		return (0);
	return (p2[i] - p1[i]);
}

int main()
{
	char s1[10] = "i";
	char s2[10] = "I";
	size_t n = 10;
	printf("miens : %d\n", ft_memcmp(s1, s2, n));
	printf("vrai : %d\n", memcmp(s1, s2, n));
}
