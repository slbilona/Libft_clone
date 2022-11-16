/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_pas_fini.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilselbon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:11:45 by ilselbon          #+#    #+#             */
/*   Updated: 2022/11/15 14:48:32 by ilselbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int	ft_verif(char actuel, char c)
{
	if (actuel == c)
		return (1);
	return (0);
}

int	ft_compte_mot(char const *s, char c)
{
	int	compte;
	int	i;

	i = 0;
	compte = 0;
	while (s[i])
	{
		while (s[i] && ft_verif(s[i], c) == 1)
			i++;
		if (s[i] != '\0')
			compte++;
		while (s[i] && ft_verif(s[i], c) == 0)
			i++;
	}
	return (compte);
}

int	ft_taille_mot(char const *s, char c, int i)
{
	int	taille;

	taille = 0;
	while (s[i])
	{
		if (s[i] != '\0' && ft_verif(s[i], c) == 1)
			return (taille);
		else
			taille++;
		i++;
	}
	return (taille);
}

void	ft_strncpy(char const *s, char *dest, int n, int i)
{
	int	k;

	k = 0;
	while (k < n)
	{
		dest[k] = s[i];
		i++;
		k++;
	}
	dest[k] = '\0';
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**dest;
	int		k;

	k = 0;
	i = 0;
	dest = (char **)malloc(sizeof(char *) * (ft_compte_mot(s, c) + 1));
	while (k < ft_compte_mot(s, c))
	{
		while (s[i] && ft_verif(s[i], c) == 1)
			i++;
		if ((s[i] != '\0') && ft_verif(s[i], c) == 0)
		{
			dest[k] = (char *)malloc(ft_taille_mot(s, c, i) * sizeof(char));
			ft_strncpy(s, dest[k], ft_taille_mot(s, c, i), i);
			i += ft_taille_mot(s, c, i);
			k++;
		}
	}
	dest[k] = NULL;
	return (dest);
}
