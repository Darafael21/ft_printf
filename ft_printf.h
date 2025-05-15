/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:55:22 by darafael          #+#    #+#             */
/*   Updated: 2025/05/14 18:38:24 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stddef.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int	forconversion(char c, va_list *args);
int	printf_char(int c);
int	ft_printf(const char *format, ...);
int	printf_hex(unsigned int n, int uppercase);
int	printf_num(int number);
int	printf_str(char *str);
int	printf_pointers(void *ptr);
int	printf_unsint(unsigned int n);

#endif