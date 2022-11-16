/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_pas_fini.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilselbon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:40:33 by ilselbon          #+#    #+#             */
/*   Updated: 2022/11/15 16:48:22 by ilselbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_compte(int n)
{
	int compte = 0;
	if (n < 0)
	{
		compte ++;
		n = n * -1;
	}
	if (n >= 0 && n <= 9)
	{
		compte++;
		return (compte);
	}
	else
	{
		while (n != 0)
		{
			n = n / 10;
			compte++;
		}
		return (compte);
	}
	return (compte);
}

void ft_putnbr(int n, char *dest, int i)
{
	if(0 <= n && n <= 9)
	{
		dest[i] = n + 48;
		i++;
	}
	else
	{
		ft_putnbr((n / 10), dest, i);
		ft_putnbr((n % 10), dest, i);
	}
}

char *ft_itoa(int n)
{
	char *dest;
	int taille;
	int i;

	i = 0;
	taille = ft_compte(n);
	dest = (char *)malloc((taille + 1) * sizeof(char));
	if (dest)
	{
		if(n < 0)
		{
			dest[i] = '-';
			n = n * -1;
			i++;
		}
		dest[taille +1] = '\0';
		ft_putnbr(n / 10, dest, i);
		ft_putnbr(n % 10, dest, i);
		return (dest);
	}
	return (NULL);
}

int main()
{
	int n = (106);
	printf("%s\n", ft_itoa(n));
}
