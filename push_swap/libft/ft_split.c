/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivaliev <ivaliev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 06:28:26 by ivaliev           #+#    #+#             */
/*   Updated: 2022/11/22 06:28:27 by ivaliev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_w(const char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	if (s[i] == c)
		word--;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			word++;
		i++;
	}
	word++;
	return (word);
}

static	char	*ft_word_dup(const char *s, char c)
{
	char	*word_c;
	int		i;
	int		size;

	size = 0;
	while (s[size] != '\0' && s[size] != c)
		size++;
	word_c = (char *)malloc(sizeof(char) * (size + 1));
	if (!word_c)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		word_c[i] = s[i];
		i++;
	}
	word_c[i] = 0;
	return (word_c);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		words;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	words = ft_count_w(s, c);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	while (*s != '\0')
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			tab[i] = ft_word_dup(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	tab[i] = 0;
	return (tab);
}
