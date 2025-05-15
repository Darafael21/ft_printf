/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:34:35 by darafael          #+#    #+#             */
/*   Updated: 2025/04/09 14:11:07 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
		return (0);
}
/*#include <stdio.h>

int	main()
{
	int a = 'a';
	int b = '2';
	int c = '-';
	unsigned char x = 233;
	unsigned char y = 66;
	unsigned char z = 128;
	unsigned char w = 50;
	printf("%d\n", ft_isascii(a));
	printf("%d\n", ft_isascii(b));
	printf("%d\n", ft_isascii(c));
	printf("%d\n", ft_isascii(x));
	printf("%d\n", ft_isascii(y));
	printf("%d\n", ft_isascii(z));
	printf("%d\n", ft_isascii(w));
	return 0;
}*/