/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:51:28 by astefane          #+#    #+#             */
/*   Updated: 2024/04/22 14:08:54 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_hexa_len(unsigned int num)
{
	unsigned int	len;

	len = 0;
	while (num)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

static	void	ft_put_hexa(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_put_hexa(num / 16, format);
		ft_put_hexa(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
		{
			if (format == 'x')
				ft_putchar(num - 10 + 'a');
			if (format == 'X')
				ft_putchar(num - 10 + 'A');
		}
	}
}

int	ft_print_hexa(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_hexa(num, format);
	return (ft_hexa_len(num));
}
