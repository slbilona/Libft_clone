/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilselbon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:17:21 by ilselbon          #+#    #+#             */
/*   Updated: 2022/11/08 16:12:47 by ilselbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	const char *s;
	char *d;
	size_t i;

	i = 0;
	s = (char *) src;
	d = (char *) dest;
	
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

int main()
{
	int ligne[] = {1, 2, 3, 4, 5, 6, 7};
	int ligne2[] = {1, 2, 3, 4, 5, 6, 7};
	memmove(&ligne[3], ligne, 4);
	ft_memmove(&ligne2[3], ligne2, 4);
	printf("\nmemmove : ");
        for(int i = 0; i < 7; i++)
                printf("%d, ", ligne[i]);
	printf("\nmien : ");
        for(int i = 0; i < 7; i++)
                printf("%d, ", ligne2[i]);
}
