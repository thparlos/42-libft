/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 12:00:49 by thparlos          #+#    #+#             */
/*   Updated: 2018/11/18 18:00:01 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strdup(const char *src)
{
	int		i;
	char	*tab;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (!(tab = (char*)malloc(sizeof(*tab) * (i + 1))))
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
