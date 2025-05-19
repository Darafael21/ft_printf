/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_pointers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 10:50:24 by darafael          #+#    #+#             */
/*   Updated: 2025/05/19 09:15:19 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	printf_ptrrecursive(unsigned long n, char *base)
{
	int		len;
	char	c;

	len = 0;
	if (n >= 16)
	{
		len = printf_ptrrecursive(n / 16, base);
		if (len == -1)
			return (-1);
	}
	c = base[n % 16];
	if (write(1, &c, 1) == -1)
		return (-1);
	return (len + 1);
}

int	printf_pointers(void *ptr)
{
	unsigned long	address;
	char			*hex_digits;
	int				len;

	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	address = (unsigned long)ptr;
	hex_digits = "0123456789abcdef";
	len = 0;
	if (write(1, "0x", 2) != 2)
		return (-1);
	len += 2;
	return (len + printf_ptrrecursive(address, hex_digits));
}
