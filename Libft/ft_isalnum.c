/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgencer <rgencer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:14:11 by rgencer           #+#    #+#             */
/*   Updated: 2024/10/13 10:45:40 by rgencer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int value)
{
	int	is_lowercase_letter;
	int	is_uppercase_letter;
	int	is_digit;

	is_lowercase_letter = (value >= 'a' && value <= 'z');
	is_uppercase_letter = (value >= 'A' && value <= 'Z');
	is_digit = (value >= '0' && value <= '9');
	return (is_lowercase_letter || is_uppercase_letter || is_digit);
}
