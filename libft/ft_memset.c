/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:24:59 by darafael          #+#    #+#             */
/*   Updated: 2025/04/17 17:15:26 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	temp = (unsigned char *) b;
	i = 0;
	while (i < n)
	{
		temp[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*#include <stdio.h>

int	main()
{
	char numbers[15];
	ft_memset(numbers, '0', 10);
	numbers[10] = '\0';
	printf("%s", numbers);
	return (0);
}*/