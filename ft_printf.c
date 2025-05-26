/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:33:14 by darafael          #+#    #+#             */
/*   Updated: 2025/05/23 16:48:06 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	parsing(const char *printed, va_list args)
{
	int		i;
	int		len;
	int		temp;

	i = 0;
	len = 0;
	while (printed[i])
	{
		if (printed[i] == '%' && printed[i + 1])
		{
			temp = conversion(&printed[++i], args);
			if (temp < 0)
				return (-1);
			len += temp;
		}
		else
		{
			if (write(1, &printed[i], 1) != 1)
				return (-1);
			len += 1;
		}
		i++;
	}
	return (len);
}

int	ft_printf(const char *printed, ...)
{
	va_list	args;
	int		i;
	int		len;

	if (!printed)
		return (-1);
	i = 0;
	len = 0;
	va_start(args, printed);
	len = parsing(printed, args);
	va_end(args);
	return (len);
}

// #include <stdio.h>
// #include <fcntl.h>
// #include <unistd.h>

// int main(void)
// {
// 	int fd = open("/dev/full", O_WRONLY);
// 	if (fd == -1)
// 	{
// 		perror("open");
// 		return (1);
// 	}
// 	if (dup2(fd, STDOUT_FILENO) == -1)
// 	{
// 		perror("dup2");
// 		close(fd);
// 		return (1);
// 	}

// 	int ret = ft_printf("This should fail\n");
// 	if (ret == -1)
// 		write(2, "ft_printf returned -1 as expected\n", 34);
// 	else
// 		dprintf(2, "ft_printf returned: %d (expected -1)\n", ret);

// 	close(fd);
// 	return (0);
// }

// #include <stdio.h>
// #include <fcntl.h>
// #include <unistd.h>

// int main(void)
// {
// 	int std, ft;
// 	char *str = (NULL);
// 	char st = (NULL);

// 	std = printf("1. S [%c] [%c]\n", st, 'B');
// 	ft = ft_printf("1. S [%c] [%c]\n", st, 'B');
// 	printf("	STD: %d, FT: %d\n\n", std, ft);

// 	std = printf("2. S [%s] [%s]\n", "Hello", str);
// 	ft = ft_printf("2. S [%s] [%s]\n", "Hello", str);
// 	printf("	STD: %d, FT: %d\n\n", std, ft);

// 	std = printf("3. D [%d] [%ld]\n", -42, -2147483648);
// 	ft = ft_printf("3. D [%d] [%d]\n", -42, -2147483648);
// 	printf("	STD: %d, FT: %d\n\n", std, ft);

// 	std = printf("4. I [%i] [%li]\n", -12, -2147483648);
// 	ft = ft_printf("4. I [%i] [%i]\n", -12, -2147483648);
// 	printf("	STD: %d, FT: %d\n\n", std, ft);

// 	std = printf("5. U [%u] [%u]\n", -300000000, 2000000);
// 	ft = ft_printf("5. U [%u] [%u]\n", -300000000, 2000000);
// 	printf("	STD: %d, FT: %d\n\n", std, ft);

// 	std = printf("6. x [%x] [%x]\n", 0xDEFEC8ED, 0xBADC0DE);
// 	ft = ft_printf("6. x [%x] [%x]\n", 0xDEFEC8ED, 0xBADC0DE);
// 	printf("	STD: %d, FT: %d\n\n", std, ft);

// 	std = printf("7. X [%X] [%X]\n", 3741676013, 0xBADC0DE);
// 	ft = ft_printf("7. X [%X] [%X]\n", 3741676013, 0xBADC0DE);
// 	printf("	STD: %d, FT: %d\n\n", std, ft);

// 	std = printf("8.1 p [%p] [%p]\n",
// 		(void *)0x1234abcd, (void *)0x12ab);
// 	ft = ft_printf("8.1 p [%p] [%p]\n",
// 		(void *)0x1234abcd, (void *)0x12ab);
// 	printf("	STD: %d, FT: %d\n\n", std, ft);

// 	int a = 10;
// 	int *b = &a;
// 	int c = 'p';
// 	int *d = &c;
// 	std = printf("8.2 p [%p] [%p]\n",b, d);
// 	ft = ft_printf("8.2 p [%p] [%p]\n",b, d);
// 	printf("	STD: %d, FT: %d\n\n", std, ft);

// 	std = printf("8.3 NULL p [%p] [%p]\n", (void *)345322, (void *)0);
// 	ft = ft_printf("8.3 NULL p [%p] [%p]\n", (void *)345322, (void *)0);
// 	printf("	STD: %d, FT: %d\n\n", std, ft);

// 	std = printf("9. percent [%%]\n");
// 	ft = ft_printf("9. percent [%%]\n");
// 	printf("	STD: %d, FT: %d\n\n", std, ft);

// 	std = printf("10. Mixed: [%c] [%s] [%d] [%i] [%u] [%x] [%X] [%p] [%%]\n",
// 		'A', "David", 42, -12, 30000u, 0xDEFEC8ED,
// 		0xBADC0DE, (void *)0x1234abcd);
// 	ft = ft_printf("10. Mixed: [%c] [%s] [%d] [%i] [%u] [%x] [%X] [%p] [%%]\n",
// 		'A', "David", 42, -12, 30000u, 0xDEFEC8ED,
// 		0xBADC0DE, (void *)0x1234abcd);
// 	printf("	STD: %d, FT: %d\n\n", std, ft);
// 	return (0);
// }