/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:18:11 by thparlos          #+#    #+#             */
/*   Updated: 2018/11/16 05:55:17 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t lendst;
	size_t lensrc;

	j = 0;
	i = ft_strlen(dst);
	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	if (size < lendst + 1)
		return (lensrc + size);
	if (size > lendst + 1)
	{
		while (src[j] != '\0' && i < size - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (lensrc + lendst);
}
