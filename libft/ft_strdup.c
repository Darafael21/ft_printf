/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:56:00 by darafael          #+#    #+#             */
/*   Updated: 2025/04/17 17:16:48 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(const char *s)
{
	char	*dst;

	dst = malloc(ft_strlen(s) + 1);
	if (dst == NULL)
		return (NULL);
	ft_strcpy (dst, s);
	return (dst);
}
/*
#include <stdio.h>

int	main()
{
	char str1[] = "hello";
	char *copy = ft_strdup(str1);
	char *copy2 = strdup(str1);
	if (copy == NULL || copy2 == NULL)
	{
		printf("Memory failed");
		return (1);
	}
	printf("%p\n", &str1);
	printf("%p %s\n", copy , copy);
	printf("%p %s\n", copy2, copy2);
	return (0);
}
*/