/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:14:30 by darafael          #+#    #+#             */
/*   Updated: 2025/04/23 10:48:04 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*vs;
	unsigned char	ic;

	vs = (unsigned char *) s;
	ic = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (vs[i] == ic)
			return ((void *)&vs[i]);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>

void	print_result(const void *str)
{
	if (str)
		printf("%s\n", (char *)str);
	else
		printf("(null)\n");
}

int	main()
{
	char *str = "borbuleta";
	char *str1 = "l";
	char *str2 = "\0";
	char *str3 = "ola";
	char *str4 = "";
	int c = 'l';
	size_t	n = 6;
	print_result(memchr(str, c, n));
	print_result(memchr(str1, c, n));
	print_result(memchr(str2, c, n));
	print_result(memchr(str3, c, n));
	print_result(memchr(str4, c, n));
	printf("\n");
	print_result(ft_memchr(str, c, n));
	print_result(ft_memchr(str1, c, n));
	print_result(ft_memchr(str2, c, n));
	print_result(ft_memchr(str3, c, n));
	print_result(ft_memchr(str4, c, n));
	return (0);
}*/