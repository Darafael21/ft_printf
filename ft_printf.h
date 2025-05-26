/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:55:22 by darafael          #+#    #+#             */
/*   Updated: 2025/05/23 16:45:02 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int	conversion(const char *c, va_list args);
int	printf_char(int c);
int	ft_printf(const char *format, ...);
int	printf_hex(unsigned int n, int uppercase);
int	printf_num(int n);
int	printf_str(char *str);
int	printf_pointers(void *ptr);
int	printf_unsint(unsigned int n);

#endif