/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilselbon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:25:29 by ilselbon          #+#    #+#             */
/*   Updated: 2022/11/16 14:10:13 by ilselbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <bsd/string.h>
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t j;

	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while(big[i + j] == little[j] && big[i] && i < len && j < len)
		{
			if(little[j] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

int main()
{
	printf("vrai : %s\n", strnstr("coucou toi", "ou t", sizeof(char) * 4));
	printf("%s\n", ft_strnstr("coucou toi", "ou t", sizeof(char) * 4));
}
