/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:40:41 by sfarren           #+#    #+#             */
/*   Updated: 2024/05/27 18:49:25 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Checks if the given character is an alphabetic character.
 *
 * @param c The character to be checked.
 * @return 1 if the character is an alphabetic character, 0 otherwise.
 */
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
