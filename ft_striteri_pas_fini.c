/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilselbon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:41:14 by ilselbon          #+#    #+#             */
/*   Updated: 2022/11/15 13:10:31 by ilselbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_test(unsigned int i, char *c)
{
	
}

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int i = 0;
	while(s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

int main()
{
	char *str = "test";
	void(*f)(unsigned int, char*);
	f = &ft_test;
	ft_striteri(str, (*f));
	printf("%s\n", str);
}
