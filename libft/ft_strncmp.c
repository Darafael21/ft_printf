/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:00:47 by darafael          #+#    #+#             */
/*   Updated: 2025/04/30 08:38:18 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i]
			|| s1[i] == '\0' || s2[i] == '\0')
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%d", strncmp("dav", "div", 3));
	printf("\n%d", strncmp("duv", "dev", 3));
	printf("\n%d", strncmp("da", "david", 3));
	printf("\n%d\n", strncmp("david", "david", 3));
	printf("\n");
	printf("%d", ft_strncmp("dav", "div", 3));
	printf("\n%d", ft_strncmp("duv", "dev", 3));
	printf("\n%d", ft_strncmp("da", "david", 3));
	printf("\n%d\n", ft_strncmp("david", "david", 3));
	return (0);
}*/