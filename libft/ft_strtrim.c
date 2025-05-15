/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:28:08 by darafael          #+#    #+#             */
/*   Updated: 2025/04/30 08:33:47 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static char	*final(const char *s1, size_t len, size_t start, char *trimmed)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trimmed;
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = start;
	while (s1[end])
		end++;
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	len = end - start;
	trimmed = malloc((len + 1) * sizeof(char));
	if (trimmed == NULL)
		return (NULL);
	i = 0;
	return (final(s1, len, start, trimmed));
}
/*#include <stdio.h>

int	main(void)
{
	char *s1 = "   \tHello World!\n   ";
	char *s2 = "xxxDavidDiasxxx";
	char *s3 = "--trimmable--";
	char *s4 = "nothing to trim";
	char *s5 = "";
	char *set1 = " \n\t";
	char *set2 = "x";
	char *set3 = "-";
	char *set4 = "abc";
	char *res1 = ft_strtrim(s1, set1);
	char *res2 = ft_strtrim(s2, set2);
	char *res3 = ft_strtrim(s3, set3);
	char *res4 = ft_strtrim(s4, set4);
	char *res5 = ft_strtrim(s5, set1);
	printf("%s\n%s\"\n\n", s1, res1);
	printf("%s\n%s\"\n\n", s2, res2);
	printf("%s\n%s\"\n\n", s3, res3);
	printf("%s\n%s\"\n\n", s4, res4);
	printf("%s\n%s\"\n\n", s5, res5);
	return (0);
}*/