/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgencer <rgencer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:07:35 by rgencer           #+#    #+#             */
/*   Updated: 2024/10/20 11:53:29 by rgencer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*ft_get_word(char const *s, char c, size_t *i)
{
	char	*word;
	size_t	j;

	while (s[*i] && s[*i] == c)
		(*i)++;
	j = *i;
	while (s[j] && s[j] != c)
		j++;
	word = ft_substr(s, *i, j - *i);
	*i = j;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	strs = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!strs)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			strs[j] = ft_get_word(s, c, &i);
			j++;
		}
		else
			i++;
	}
	strs[j] = NULL;
	return (strs);
}
