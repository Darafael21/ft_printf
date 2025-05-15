/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:16:44 by darafael          #+#    #+#             */
/*   Updated: 2025/04/17 17:13:37 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		result;
	int		sign;

	result = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v'
		|| nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	result *= sign;
	return (result);
}
/*#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("%d\n%d\n", atoi(av[1]), ft_atoi(av[1]));
}

int	main(void)
{
	const char *test1 = "42";
	const char *test2 = "   -42";
	const char *test3 = "+123";
	const char *test4 = "0042";
	const char *test5 = "  -00123abc";
	const char *test6 = "abc123";
	const char *test7 = "";
	const char *test8 = "   +--+42";
	printf("%d\n",atoi(test1));
	printf("%d\n",atoi(test2));
	printf("%d\n",atoi(test3));
	printf("%d\n",atoi(test4));
	printf("%d\n",atoi(test5));
	printf("%d\n",atoi(test6));
	printf("%d\n",atoi(test7));
	printf("%d\n",atoi(test8));
	printf("\n");
	printf("%d\n",ft_atoi(test1));
	printf("%d\n",ft_atoi(test2));
	printf("%d\n",ft_atoi(test3));
	printf("%d\n",ft_atoi(test4));
	printf("%d\n",ft_atoi(test5));
	printf("%d\n",ft_atoi(test6));
	printf("%d\n",ft_atoi(test7));
	printf("%d\n",ft_atoi(test8));

	return 0;

}*/
