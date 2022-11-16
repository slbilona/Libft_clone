/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilselbon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:48:36 by ilselbon          #+#    #+#             */
/*   Updated: 2022/11/14 14:52:00 by ilselbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*news;
	int		i;
	int		j;

	i = 0;
	j = 0;
	news = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (news)
	{
		while (s1[i])
			news[j++] = s1[i++];
		i = 0;
		while (s2[i])
			news[j++] = s2[i++];
		news[j] = '\0';
		return (news);
	}
	return (NULL);
}
