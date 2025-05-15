/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:51:12 by darafael          #+#    #+#             */
/*   Updated: 2025/04/30 09:00:10 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	cfinal;

	cfinal = (char)c;
	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == cfinal)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int	main()
{
	char *str = "orbuletab";
	char *str1 = "b";
	char *str2 = "\0";
	char *str3 = "bola";
	char *str4 = "";
	int c = 'b';

	printf("%s\n", strrchr(str, c));
	printf("%s\n", strrchr(str1, c));
	printf("%s\n", strrchr(str2, c));
	printf("%s\n", strrchr(str3, c));
	printf("%s\n", strrchr(str4, c));
	printf("\n");
	printf("%s\n", ft_strrchr(str, c));
	printf("%s\n", ft_strrchr(str1, c));
	printf("%s\n", ft_strrchr(str2, c));
	printf("%s\n", ft_strrchr(str3, c));
	printf("%s", ft_strrchr(str4, c));
	return (0);
}*/