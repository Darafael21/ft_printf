/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:11:12 by darafael          #+#    #+#             */
/*   Updated: 2025/04/10 14:39:33 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
/*#include <stdio.h>

int	main()
{
	int	b = 'A';
	int	d = 'a';
	int	e = '2';
	printf("%c\n",ft_toupper(b));
	printf("%c\n",ft_toupper(d));
	printf("%c",ft_toupper(e));
	return (0);
}*/