/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 13:38:02 by thparlos          #+#    #+#             */
/*   Updated: 2018/11/18 18:33:15 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned int	i;

	tmp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (tmp[i] == (unsigned char)c)
			return (void *)(tmp + i);
		i++;
	}
	return (NULL);
}
