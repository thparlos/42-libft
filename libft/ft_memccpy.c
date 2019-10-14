/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 13:00:44 by thparlos          #+#    #+#             */
/*   Updated: 2018/11/16 02:13:06 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			*tmpdst;
	unsigned char			*tmpsrc;

	i = 0;
	tmpdst = (unsigned char *)dst;
	tmpsrc = (unsigned char *)src;
	while (i < n)
	{
		tmpdst[i] = tmpsrc[i];
		if (tmpdst[i] == (unsigned char)c)
			return ((void *)&tmpdst[i + 1]);
		i++;
	}
	return (NULL);
}
