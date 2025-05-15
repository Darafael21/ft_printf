/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:15:04 by darafael          #+#    #+#             */
/*   Updated: 2025/04/09 14:11:01 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
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
	printf("%d\n", ft_isdigit(a));
	printf("%d\n", ft_isdigit(b));
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", ft_isdigit(x));
	printf("%d\n", ft_isdigit(y));
	printf("%d\n", ft_isdigit(z));
	printf("%d\n", ft_isdigit(w));
	return 0;
}*/