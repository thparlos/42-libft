/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 20:38:52 by thparlos          #+#    #+#             */
/*   Updated: 2018/11/20 15:06:02 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*tab;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(tab = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (len > 0)
	{
		tab[i] = s[start];
		i++;
		start++;
		len--;
	}
	tab[i] = '\0';
	return (tab);
}
