/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:58:06 by sfarren           #+#    #+#             */
/*   Updated: 2024/09/20 12:14:03 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./src/libft.h"

int	main(void)
{
	char	*str;

	ft_printf("Testing ft_printf: %d, %s, %p\n", 42, "Hello, world!", NULL);
	str = ft_strdup("Testing ft_strdup from libft");
	if (str)
	{
		ft_printf("%s\n", str);
		free(str);
	}
	return (0);
}
