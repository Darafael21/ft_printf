/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forconversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:35:12 by darafael          #+#    #+#             */
/*   Updated: 2025/05/23 12:08:14 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	conversion(const char *c, va_list args)
{
	if (*c == 'c')
		return (printf_char(va_arg(args, int)));
	if (*c == 's')
		return (printf_str(va_arg(args, char *)));
	if (*c == 'p')
		return (printf_pointers(va_arg(args, void *)));
	if (*c == 'd' || *c == 'i')
		return (printf_num(va_arg(args, int)));
	if (*c == 'u')
		return (printf_unsint(va_arg(args, unsigned int)));
	if (*c == 'x')
		return (printf_hex(va_arg(args, unsigned int), 0));
	if (*c == 'X')
		return (printf_hex(va_arg(args, unsigned int), 1));
	if (*c == '%')
		return (write(1, "%", 1));
	return (0);
}
