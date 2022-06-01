/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferraro <vferraro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:16:56 by vferraro          #+#    #+#             */
/*   Updated: 2022/05/31 13:08:24 by vferraro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordscount(const char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i])
		{
			while (str[i] != c && str[i])
				i++;
			word++;
		}
	}
	return (word);
}

static char	*lettercount(const char *str, int up, int down)
{
	char	*count;
	int		i;

	i = 0;
	if (!str)
		return (0);
	count = malloc(sizeof(char) * ((down - up) + 1));
	if (count == 0)
		return (NULL);
	while (up < down)
	{
		count[i] = str[up];
		i++;
		up++;
	}
	count[i] = '\0';
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	n;
	int		index;
	char	**dst;

	if (!s)
		return (0);
	dst = (char **)malloc(sizeof(char *) * (wordscount(s, c) + 1));
	if (!dst)
		return (NULL);
	i = -1;
	n = 0;
	index = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			dst[n++] = lettercount(s, index, i);
			index = -1;
		}
	}
	dst[n] = 0;
	return (dst);
}
