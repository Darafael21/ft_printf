/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_pointers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 10:50:24 by darafael          #+#    #+#             */
/*   Updated: 2025/05/15 09:56:26 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	printf_ptrrecursive(unsigned long n, char *base)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 16)
	{
		count = printf_ptrrecursive(n / 16, base);
		if (count == -1)
			return (-1);
	}
	c = base[n % 16];
	if (write(1, &c, 1) == -1)
		return (-1);
	return (count + 1);
}

int	printf_pointers(void *ptr)
{
	unsigned long	address;
	char			*hex_digits;
	int				count;

	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	address = (unsigned long)ptr;
	hex_digits = "0123456789abcdef";
	count = 0;
	if (write(1, "0x", 2) != 2)
		return (-1);
	count += 2;
	return (count + printf_ptrrecursive(address, hex_digits));
}
