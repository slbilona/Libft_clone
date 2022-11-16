/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_pas_fini.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilselbon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:40:33 by ilselbon          #+#    #+#             */
/*   Updated: 2022/11/16 18:27:11 by ilselbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_compte(int n)
{
	int	compte;

	compte = 0;
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

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*str;

	j = 0;
	if (n == -2147483648)
	{
		str = malloc(sizeof(char) * 12);
		str = "-2147483648";
		return (str);
	}
	i = ft_compte(n);
	str = malloc(sizeof(char) * (i + 1));
	str[i] = '\0';
	if (n == 0)
		str[j] = n + 48;
	else if (n < 0)
	{
		n = n * -1;
		str[j] = '-';
		j++;
	}
	while (j < i--)
	{
		str[i] = (n % 10) + 48;
		n = n / 10;
	}
	return (str);
}

int main()
{
	int n = (-2147483648);
	printf("%s\n", ft_itoa(n));
}
