/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:47:47 by thparlos          #+#    #+#             */
/*   Updated: 2018/11/18 16:38:39 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*tab;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	if (!(tab = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		tab[i] = (*f)(s[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
