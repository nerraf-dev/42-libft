/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:17:50 by sfarren           #+#    #+#             */
/*   Updated: 2025/04/27 19:21:48 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	format_handler(const char c, va_list args, int *count)
{
	if (c == 'd' || c == 'i')
		ft_printnbr_base(va_arg(args, int), DECIMAL, count);
	else if (c == 's')
		ft_printstr(va_arg(args, char *), count);
	else if (c == 'c')
		ft_printchr(va_arg(args, int), count);
	else if (c == '%')
		ft_printchr('%', count);
	else if (c == 'x')
		ft_printnbr_base(va_arg(args, unsigned int), HEX_LOWER, count);
	else if (c == 'X')
		ft_printnbr_base(va_arg(args, unsigned int), HEX_UPPER, count);
	else if (c == 'u')
		ft_printnbr_base(va_arg(args, unsigned int), DECIMAL, count);
	else if (c == 'p')
		ft_printptr(va_arg(args, void *), count);
	else
		*count = -1;
}

/**
 * @brief ft_printf - A simplified implementation of the printf function.
 *
 * This function processes the format string and prints characters or
 * formatted output based on the format specifiers. It uses a variable
 * argument list to handle the additional arguments corresponding to
 * the format specifiers.
 *
 * d - integer
 * i - integer
 * s - string
 * c - character
 * % - percent sign
 * x - hexadecimal (lowercase)
 * X - hexadecimal (uppercase)
 * u - unsigned integer
 * p - pointer address
 *
 * @note This function is a simplified version of the standard printf
 * function. It does not handle all format specifiers or error cases.
 *
 * @param str: The format string containing characters and format specifiers.
 *       Format specifiers are preceded by a '%' character.
 *       Supported specifiers are handled by the format_handler function.
 * @returns print_counter: The total number of characters printed.
 *
 * Note:
 * - The function uses va_list to handle the variable arguments.
 * - The format_handler function is called to process format specifiers.
 * - The ft_printchr function is used to print individual characters.
 */
int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_counter;

	i = 0;
	print_counter = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			format_handler(str[i + 1], args, &print_counter);
			i++;
		}
		else
			ft_printchr(str[i], &print_counter);
		i++;
	}
	va_end(args);
	return (print_counter);
}
