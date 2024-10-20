/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgencer <rgencer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:13:40 by rgencer           #+#    #+#             */
/*   Updated: 2024/10/20 12:03:10 by rgencer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurence;

	c = (unsigned char)c;
	last_occurence = NULL;
	while (*s)
	{
		if (*s == c)
			last_occurence = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (last_occurence);
}
