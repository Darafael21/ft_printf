/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:00:49 by darafael          #+#    #+#             */
/*   Updated: 2025/04/25 17:53:23 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tempdest;
	const unsigned char	*tempsrc;

	tempdest = (unsigned char *)dest;
	tempsrc = (const unsigned char *)src;
	if (tempdest == tempsrc || n == 0)
		return (dest);
	if (tempdest < tempsrc)
	{
		while (n--)
			*tempdest++ = *tempsrc++;
	}
	else
	{
		tempdest = tempdest + n -1;
		tempsrc = tempsrc + n -1;
		while (n--)
			*tempdest-- = *tempsrc--;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str[20] = "OLADIASBARRETO";
	printf("Before: %s\n", str);
	ft_memmove(str + 3, str, 7);
	printf("After : %s\n", str);
	return (0);
}
*/