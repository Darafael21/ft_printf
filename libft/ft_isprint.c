/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:41:02 by darafael          #+#    #+#             */
/*   Updated: 2025/04/09 14:10:46 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (c);
	}
	else
		return (0);
}
/*#include <stdio.h>

int	main()
{
	int a = 'a';
	int b = '\n';
	int c = '-';
	unsigned char x = 200;
	unsigned char y = 66;
	unsigned char z = 127;
	unsigned char w = 50;
	printf("%d\n", ft_isprint(a));
	printf("%d\n", ft_isprint(b));
	printf("%d\n", ft_isprint(c));
	printf("%d\n", ft_isprint(x));
	printf("%d\n", ft_isprint(y));
	printf("%d\n", ft_isprint(z));
	printf("%d\n", ft_isprint(w));
	return 0;
}*/