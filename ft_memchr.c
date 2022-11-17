/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilselbon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:16:15 by ilselbon          #+#    #+#             */
/*   Updated: 2022/11/17 17:06:40 by ilselbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stddef.h>
#include <stdio.h>

void	*ft_memchr( const void *s, int c, size_t n)
{
	const unsigned char	*src;
	size_t				i;

	src = (const unsigned char *) s;
	i = 0;
	if(n > 0)
	{
		while (i <= n)
		{
			if (src[i] == c)
				return ((void *) &src[i]);
			i++;
		}
	}
	return (NULL);
}


/*
int main()
{
	int p[] = {0, 1, 2, 3, 4, 5};
	void *cherche = ft_memchr(p, 0, sizeof(int) * 0);
	printf("miens : ");
	if(cherche)
		printf("trouve: %d\n", *((char *) cherche));
	else
		printf("pas la\n");
	
	int p2[] = {0, 1, 2, 3, 4, 5};
        void *cherche2 = memchr(p2, 0, sizeof(int) * 0);
        printf("vrai : ");
	if(cherche2)
                printf("trouve : %d\n", *((char *) cherche2));
        else
                printf("pas la\n");
}*/
