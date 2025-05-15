/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_unsint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:02:39 by darafael          #+#    #+#             */
/*   Updated: 2025/05/14 17:45:48 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_unsint(unsigned int n)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 10)
	{
		count = printf_unsint(n / 10);
		if (count == -1)
			return (-1);
	}
	c = (n % 10) + '0';
	if (write(1, &c, 1) == -1)
		return (-1);
	return (count + 1);
}
