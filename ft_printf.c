/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:33:14 by darafael          #+#    #+#             */
/*   Updated: 2025/05/19 14:01:15 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
			len += forconversion(&format[++i], args);
		else
			len += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	int std, ft;
	// std = printf("1. C [%c] [%x]\n", 'A', 'B');

	int i = 0x616263;
	std = printf("x. C [%c] [%c] [%c] [%c]\n", -50, i, i, i);
	ft = ft_printf("x. C [%c] [%c] [%c] [%c]\n", -132, i , i, i);
	printf("	STD: %d, FT: %d\n\n", std, ft);

	std = printf("1. S [%c] [%c]\n", 'A', 'B');
	ft = ft_printf("1. S [%c] [%c]\n", 'A', 'B');
	printf("	STD: %d, FT: %d\n\n", std, ft);

	std = printf("2. S [%s] [%s]\n", "Hello", "David");
	ft = ft_printf("2. S [%s] [%s]\n", "Hello", "David");
	printf("	STD: %d, FT: %d\n\n", std, ft);

	std = printf("3. D [%d] [%ld]\n", -42, -2147483648);
	ft = ft_printf("3. D [%d] [%d]\n", -42, -2147483648);
	printf("	STD: %d, FT: %d\n\n", std, ft);

	std = printf("4. I [%i] [%li]\n", -12, -2147483648);
	ft = ft_printf("4. I [%i] [%i]\n", -12, -2147483648);
	printf("	STD: %d, FT: %d\n\n", std, ft);

	std = printf("5. U [%u] [%u]\n", 3000000000u, 2000000u);
	ft = ft_printf("5. U [%u] [%u]\n", 3000000000u, 2000000u);
	printf("	STD: %d, FT: %d\n\n", std, ft);

	std = printf("6. x [%x] [%x]\n", 0xDEFEC8ED, 0xBADC0DE);
	ft = ft_printf("6. x [%x] [%x]\n", 0xDEFEC8ED, 0xBADC0DE);
	printf("	STD: %d, FT: %d\n\n", std, ft);

	std = printf("7. X [%X] [%X]\n", 0xDEFEC8ED, 0xBADC0DE);
	ft = ft_printf("7. X [%X] [%X]\n", 0xDEFEC8ED, 0xBADC0DE);
	printf("	STD: %d, FT: %d\n\n", std, ft);

	std = printf("8. p [%p] [%p]\n",
		(void *)0x1234abcd, (void *)0x12ab);
	ft = ft_printf("8. p [%p] [%p]\n",
		(void *)0x1234abcd, (void *)0x12ab);
	printf("	STD: %d, FT: %d\n\n", std, ft);

	std = printf("9. NULL p [%p] [%p]\n", (void *)0, (void *)0);
	ft = ft_printf("9. NULL p [%p] [%p]\n", (void *)0, (void *)0);
	printf("	STD: %d, FT: %d\n\n", std, ft);

	std = printf("10. percent [%%]\n");
	ft = ft_printf("10. percent [%%]\n");
	printf("	STD: %d, FT: %d\n\n", std, ft);

	std = printf("11. Mixed: [%c] [%s] [%d] [%i] [%u] [%x] [%X] [%p] [%%]\n",
		'A', "David", 42, -12, 30000u, 0xDEFEC8ED,
		0xBADC0DE, (void *)0x1234abcd);
	ft = ft_printf("11. Mixed: [%c] [%s] [%d] [%i] [%u] [%x] [%X] [%p] [%%]\n",
		'A', "David", 42, -12, 30000u, 0xDEFEC8ED,
		0xBADC0DE, (void *)0x1234abcd);
	printf("	STD: %d, FT: %d\n\n", std, ft);
	
	return (0);
}
*/
