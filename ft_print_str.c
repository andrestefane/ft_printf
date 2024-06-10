/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:57:45 by astefane          #+#    #+#             */
/*   Updated: 2024/04/22 14:41:46 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
	{
		return (ft_print_str("(null)"));
	}
	while (*str)
	{
		count += ft_print_char(*str++);
	}
	return (count);
}
