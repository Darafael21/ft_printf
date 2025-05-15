/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:51:22 by darafael          #+#    #+#             */
/*   Updated: 2025/04/23 11:08:23 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static void	free_all(char **arr, size_t count)
{
	while (count--)
		free(arr[count]);
	free(arr);
}

static char	**split_words(const char *s, char c, size_t word_count)
{
	char		**arr;
	const char	*start;
	size_t		i;

	i = 0;
	arr = malloc((word_count + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	while (*s && i < word_count)
	{
		while (*s == c)
			s++;
		start = s;
		while (*s && *s != c)
			s++;
		arr[i] = ft_substr(start, 0, s - start);
		if (arr[i] == NULL)
			return (free_all(arr, i), NULL);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	if (s == NULL)
		return (NULL);
	return (split_words(s, c, count_words(s, c)));
}
/*#include <stdio.h>
#include <stdlib.h>

void	print_split(char **split)
{
	int i = 0;

	if (split == NULL)
	{
		printf("Result: NULL\n");
		return;
	}
	while (split[i])
	{
		printf("split[%d] = \"%s\"\n", i, split[i]);
		free(split[i]);
		i++;
	}
}
int	main(void)
{
	char *tests[] = {
		"David Rafael Barreto Dias Dias",
		"   double  spaces   ",
		"::one::two::three::",
		"",
		"no-separators",
		"-----",
		NULL
	};
	char separators[] = { ' ', ' ', ':', ' ', '-', '-' };
	int i = 0;
	while (tests[i])
	{
		printf("%s\'%c'\n", tests[i], separators[i]);
		char **result = ft_split(tests[i], separators[i]);
		print_split(result);
		i++;
	}
	return (0);
}*/