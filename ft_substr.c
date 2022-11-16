/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilselbon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:49:05 by ilselbon          #+#    #+#             */
/*   Updated: 2022/11/10 13:48:14 by ilselbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	j;
	size_t			i;
	char			*news;

	j = 0;
	i = 0;
	while (s[j])
		j++;
	news = malloc(j * len);
	if (news)
	{
		j = 0;
		while (i < len && s[start + j])
		{
			news[j] = s[start + j];
			j++;
			i++;
		}
		news[j] = '\0';
		return (news);
	}
	return (NULL);
}
