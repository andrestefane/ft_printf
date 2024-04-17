/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:38:53 by astefane          #+#    #+#             */
/*   Updated: 2024/04/17 16:28:10 by astefane         ###   ########.fr       */
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
		printf_length += ft_print_integer(va_arg(args, int));
	else if (format == 'u')
		printf_length += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		printf_length += ft_print_hexa(va_arg(args, unsigned int), format);
	else if (format == '%')
		printf_length += ft_print_percent();
	return (printf_length);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;
	int		printf_lenght;

	i = 0;
	printf_lenght = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			printf_lenght += ft_format(args, format[i + 1]);
		}
		else
		{
			printf_lenght += ft_print_char(format[i]);
		}
		i++;
	}
	va_end(args);
	return (printf_lenght);
}
