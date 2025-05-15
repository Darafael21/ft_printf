/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:56:32 by darafael          #+#    #+#             */
/*   Updated: 2025/04/30 08:58:06 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (len > 0)
	{
		while (src[i] && i < len - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

/*#include <stdio.h>

int	main()
{
	char dst[15]="David";
	char src[]="Dias";
	size_t	len;
	len = ft_strlcpy(dst,src,sizeof(dst));
	printf("%s\n", dst);
	printf("%zu", len);
	return (0);
}*/
