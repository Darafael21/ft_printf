/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:01:13 by darafael          #+#    #+#             */
/*   Updated: 2025/05/19 09:14:40 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_num(int number)
{
	char	c;
	int		len;

	len = 0;
	if (number == INT_MIN)
		return (write(1, "-2147483648", 11));
	if (number < 0)
	{
		len += write(1, "-", 1);
		number = -number;
	}
	if (number > 9)
		len += printf_num(number / 10);
	c = (number % 10) + '0';
	len += write(1, &c, 1);
	return (len);
}
