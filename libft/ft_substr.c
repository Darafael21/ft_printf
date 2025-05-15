/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 09:58:01 by darafael          #+#    #+#             */
/*   Updated: 2025/04/17 17:21:24 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	dst = malloc(len + 1);
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, s + start, len + 1);
	return (dst);
}
/*#include <stdio.h>

int main(void)
{
	char *str = "David Rafael Barreto Dias";
	char *sub1 = ft_substr(str, 0, 5);
	char *sub2 = ft_substr(str, 5, 2);
	char *sub3 = ft_substr(str, 50, 10);
	char *sub4 = ft_substr(str, 10, 100);
	printf("Sub1: %s\n", sub1);
	printf("Sub2: %s\n", sub2);
	printf("Sub3: %s\n", sub3);
	printf("Sub4: %s\n", sub4);
	return 0;
}*/