/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:29:52 by darafael          #+#    #+#             */
/*   Updated: 2025/04/10 14:40:30 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
/*#include <stdio.h>

int	main()
{
	int	b = 'A';
	int	d = 'a';
	int	e = '2';
	printf("%c\n",ft_tolower(b));
	printf("%c\n",ft_tolower(d));
	printf("%c",ft_tolower(e));
	return (0);
}*/