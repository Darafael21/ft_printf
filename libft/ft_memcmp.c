/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:18:15 by darafael          #+#    #+#             */
/*   Updated: 2025/04/15 13:40:45 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*vs1;
	unsigned char	*vs2;

	i = 0;
	vs1 = (unsigned char *) s1;
	vs2 = (unsigned char *) s2;
	while (i < n)
	{
		if (vs1[i] != vs2[i])
			return (vs1[i] - vs2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%d", memcmp("dav", "div", 3));
	printf("\n%d", memcmp("duv", "dev", 3));
	printf("\n%d", memcmp("da", "david", 3));
	printf("\n%d\n", memcmp("david", "david", 3));
	printf("\n");
	printf("%d", ft_memcmp("dav", "div", 3));
	printf("\n%d", ft_memcmp("duv", "dev", 3));
	printf("\n%d", ft_memcmp("da", "david", 3));
	printf("\n%d\n", ft_memcmp("david", "david", 3));
	return (0);
}*/