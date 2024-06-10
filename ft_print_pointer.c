/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:18:03 by astefane          #+#    #+#             */
/*   Updated: 2024/04/22 14:25:02 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_pointer_len(uintptr_t num)
{
	int	len;

	len = 0;
	while (num)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

static	void	ft_put_ptr(uintptr_t num)
{
	if (num <= 15)
	{
		if (num < 10)
			ft_putchar(num + '0');
		else
			ft_putchar(num - 10 + 'a');
	}
	else
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
}

int	ft_print_pointer(void *p)
{
	int			print_length;
	uintptr_t	ptr_val;

	ptr_val = (uintptr_t)p;
	print_length = 0;
	print_length += write(1, "0x", 2);
	if (ptr_val == 0)
		print_length += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr_val);
		print_length += ft_pointer_len(ptr_val);
	}
	return (print_length);
}
