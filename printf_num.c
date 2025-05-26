/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:01:13 by darafael          #+#    #+#             */
/*   Updated: 2025/05/23 16:44:50 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_num(int n)
{
	char	c;
	int		len;
	int		temp;

	len = 0;
	if (n == INT_MIN)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		if (write(1, "-", 1) != 1)
			return (-1);
		len++;
		n = -n;
	}
	if (n > 9)
	{
		temp = printf_num(n / 10);
		if (temp == -1)
			return (-1);
		len += temp;
	}
	c = (n % 10) + '0';
	if (write(1, &c, 1) != 1)
		return (-1);
	return (len + 1);
}
