/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:21:48 by darafael          #+#    #+#             */
/*   Updated: 2025/04/17 17:17:01 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	len;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void capitalize(unsigned int i, char *c)
{
	if (i != 2 && *c >= 'a' && *c <= 'z')
		*c = *c - 32;
}
		
int	main(void)
{
	char str[] = "daviddias21";
	ft_striteri(str, capitalize);
	printf("%s\n", str);
	return (0);
}*/
