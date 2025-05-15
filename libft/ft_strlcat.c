/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:40:20 by darafael          #+#    #+#             */
/*   Updated: 2025/04/30 08:56:19 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = 0;
	srclen = 0;
	i = 0;
	while (src[srclen])
		srclen++;
	while (dstlen < len && dst[dstlen])
		dstlen++;
	if (dstlen == len)
		return (len + srclen);
	while (src[i] && (dstlen + i < len - 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	if (dstlen + i < len)
		dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
/*#include <stdio.h>

int	main()
{
	char src[]="Dias";
	char dst[20]="David ";
	size_t	len;
	len = ft_strlcat(dst, src, sizeof(dst));
	printf("%s", dst);
	return (0);
}*/