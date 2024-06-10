/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:38:53 by astefane          #+#    #+#             */
/*   Updated: 2024/04/22 16:40:38 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(char format, va_list args)
{
	if (format == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (format == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	else if (format == 'd' || format == 'i')
		return (ft_print_integer(va_arg(args, int)));
	else if (format == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_print_hexa(va_arg(args, unsigned int), format));
	else if (format == '%')
		return (ft_print_percent());
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += ft_format(*format, args);
		}
		else
			count += ft_print_char(*format);
		format++;
	}
	va_end(args);
	return (count);
}
