/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 10:50:13 by darafael          #+#    #+#             */
/*   Updated: 2025/05/14 16:07:53 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_hex(unsigned int n, int uppercase)
{
	char	*base;
	int		count;

	if (uppercase == 1)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
	{
		count = printf_hex(n / 16, uppercase);
		if (count == -1)
			return (-1);
	}
	if (write(1, &base[n % 16], 1) == -1)
		return (-1);
	return (count + 1);
}
