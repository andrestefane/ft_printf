/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:19:13 by astefane          #+#    #+#             */
/*   Updated: 2024/04/22 13:06:37 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_len_num(long num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

static char	*ft_my_itoa(unsigned int num)
{
	long	len;
	char	*result;

	len = ft_len_num(num);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = 0;
	while (len > 0)
	{
		result[--len] = (num % 10) + '0';
		num = num / 10;
	}
	return (result);
}

int	ft_print_unsigned(unsigned int num)
{
	int		print_length;
	char	*n;

	print_length = 0;
	if (num == 0)
		print_length += write(1, "0", 1);
	else
	{
		n = ft_my_itoa(num);
		print_length += ft_print_str(n);
		free(n);
	}
	return (print_length);
}
