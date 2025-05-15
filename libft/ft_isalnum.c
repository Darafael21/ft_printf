/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:20:05 by darafael          #+#    #+#             */
/*   Updated: 2025/04/09 14:11:18 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
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
	printf("%d\n", ft_isalnum(a));
	printf("%d\n", ft_isalnum(b));
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", ft_isalnum(x));
	printf("%d\n", ft_isalnum(y));
	printf("%d\n", ft_isalnum(z));
	printf("%d\n", ft_isalnum(w));
	return 0;
}*/