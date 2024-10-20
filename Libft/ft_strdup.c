/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgencer <rgencer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:32:54 by rgencer           #+#    #+#             */
/*   Updated: 2024/10/13 11:06:00 by rgencer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (*s)
		*ptr++ = *s++;
	*ptr = '\0';
	return (ptr - len);
}
