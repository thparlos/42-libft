/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:38:39 by thparlos          #+#    #+#             */
/*   Updated: 2018/11/16 02:58:39 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*tmpdst;
	unsigned char		*tmpsrc;

	i = 0;
	tmpdst = (unsigned char *)dst;
	tmpsrc = (unsigned char *)src;
	if (tmpdst > tmpsrc)
	{
		while (i < len)
		{
			tmpdst[len - 1] = tmpsrc[len - 1];
			len--;
		}
	}
	else
		while (i < len)
		{
			tmpdst[i] = tmpsrc[i];
			i++;
		}
	return (dst);
}
