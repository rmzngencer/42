/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgencer <rgencer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:12:36 by rgencer           #+#    #+#             */
/*   Updated: 2024/10/20 12:49:15 by rgencer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_numlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n *= -1;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_itoa_fill(char *str, long nbr, size_t len)
{
	if (nbr == 0)
	{
		str[0] = '0';
	}
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr)
	{
		str[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	nbr;

	nbr = (long)n;
	len = ft_numlen(nbr);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	str = ft_itoa_fill(str, nbr, len);
	return (str);
}
