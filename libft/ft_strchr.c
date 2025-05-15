/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:41:43 by darafael          #+#    #+#             */
/*   Updated: 2025/04/17 17:16:39 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	cfirst;

	cfirst = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cfirst)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == cfirst)
		return ((char *)&s[i]);
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>

int	main()
{
	char *str = "orbuleta";
	char *str1 = "b";
	char *str2 = "\0";
	char *str3 = "ola";
	char *str4 = "";
	int c = 'b';
	printf("%s\n", strchr(str, c));
	printf("%s\n", strchr(str1, c));
	printf("%s\n", strchr(str2, c));
	printf("%s\n", strchr(str3, c));
	printf("%s\n", strchr(str4, c));
	printf("%s\n", ft_strchr(str, c));
	printf("%s\n", ft_strchr(str1, c));
	printf("%s\n", ft_strchr(str2, c));
	printf("%s\n", ft_strchr(str3, c));
	printf("%s", ft_strchr(str4, c));
	return (0);
}*/
