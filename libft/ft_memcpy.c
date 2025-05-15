/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:18:51 by darafael          #+#    #+#             */
/*   Updated: 2025/04/30 09:34:03 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*tempsrc;
	unsigned char	*tempdest;

	tempsrc = (unsigned char *) src;
	tempdest = (unsigned char *) dest;
	i = 0;
	while (i < len)
	{
		tempdest[i] = tempsrc[i];
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int main() 
{
	char src[] = "Hello David";
	char dest[11] ="Holla Dias";
	ft_memcpy(dest, src, strlen(src) + 1);
	printf("%s\n", dest);
	return (0);
}*/