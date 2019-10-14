/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 17:31:09 by thparlos          #+#    #+#             */
/*   Updated: 2018/11/18 17:27:00 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nbrwords(char *s, char c)
{
	int	nbrwords;
	int	is_word;

	nbrwords = 0;
	is_word = 0;
	while (*s)
	{
		if (is_word == 0 && *s != c)
		{
			is_word = 1;
			nbrwords++;
		}
		else if (is_word == 1 && *s == c)
			is_word = 0;
		s++;
	}
	return (nbrwords);
}

static int		ft_strlenlim(char *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	int		nbrwords;
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	nbrwords = ft_nbrwords((char *)s, c);
	if (!(tab = (char **)malloc((nbrwords + 1) * sizeof(char*))))
		return (NULL);
	i = 0;
	while (nbrwords--)
	{
		while (*s == c && *s != '\0')
			s++;
		tab[i] = ft_strsub((char *)s, 0, ft_strlenlim((char *)s, c));
		if (!tab[i])
			return (NULL);
		s = s + ft_strlenlim((char *)s, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
