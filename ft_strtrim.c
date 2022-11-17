/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_pas_fini.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilselbon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:40:02 by ilselbon          #+#    #+#             */
/*   Updated: 2022/11/17 13:47:08 by ilselbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int	ft_verif(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_compte(char const *str, char const *set, int *i)
{
	int	j;

	*i = 0;
	j = 0;
	while (str[*i] && (ft_verif(str[*i], set) == 1))
		*i += 1;
	while (str[j])
		j++;
	j--;
	while (str[j] && (ft_verif(str[j], set) == 1))
		j--;
	return (j - *i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*news;
	int		i;
	int		j;
	int		taille;

	taille = ft_compte(s1, set, &i);
	news = malloc(taille * sizeof(char));
	if (news)
	{
		while (s1[i] && j < taille)
		{
			news[j] = s1[i];
			i++;
			j++;
		}
		news[j] = '\0';
		return (news);
	}
	return (NULL);
}
