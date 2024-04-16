/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:38:53 by astefane          #+#    #+#             */
/*   Updated: 2024/04/16 13:16:50 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, const char format)
{
	int	printf_length;

	printf_length = 0;
	if (format == 'c')
		printf_length += ft_print_char(va_arg(args, int));
	else if (format == 's')
		printf_length += ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		printf_length += ft_print_pointer(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')

	else if (format == 'u')

	else if (format == 'x' || format == 'X')

	else if (format == '%')

	return (printf_length);
}
int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;
	int	printf_lenght;

	i = 0;
	printf_lenght = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			
		}
		else
		{
			
		}
		i++;
	}
	va_end(args);
	return (printf_lenght);
}