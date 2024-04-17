/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 19:45:04 by astefane          #+#    #+#             */
/*   Updated: 2024/04/17 18:21:06 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>

int		ft_print_char(int c);
char	ft_print_str(char *str);
int		ft_print_pointer(unsigned long long ptr);
int		ft_print_integer(int n);
int		ft_print_unsigned(unsigned int num);
int		ft_print_percent(void);
int		ft_print_hexa(unsigned int num, const char format);
int		ft_printf(const char *format, ...);
void	ft_putchar_fd(char c, int fd);
char	*ft_itoa(int n);

#endif