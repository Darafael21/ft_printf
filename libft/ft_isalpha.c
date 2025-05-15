/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:33:15 by darafael          #+#    #+#             */
/*   Updated: 2025/04/17 14:01:07 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
	int b = '2';
	int c = '-';
	unsigned char x = 233;
	unsigned char y = 66;
	unsigned char z = 128;
	unsigned char w = 50;
	printf("%d\n", ft_isalpha(a));
	printf("%d\n", ft_isalpha(b));
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", ft_isalpha(x));
	printf("%d\n", ft_isalpha(y));
	printf("%d\n", ft_isalpha(z));
	printf("%d\n", ft_isalpha(w));
	return 0;
}*/