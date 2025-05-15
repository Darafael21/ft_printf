/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:22:57 by darafael          #+#    #+#             */
/*   Updated: 2025/04/23 10:09:19 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)b;
	while (i < len)
	{
		temp[i] = 0;
		i++;
	}
}
/*#include <stdio.h>

int	main()
{
	int	i = 0;
	char numbers[18] = "123456789123456789";
	ft_bzero(numbers, 9);
	while(i < 18)
	{
		printf("|%01x ", (unsigned char)numbers[i]);
		printf("%d| ", (unsigned char)numbers[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/