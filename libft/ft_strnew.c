/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 16:30:29 by thparlos          #+#    #+#             */
/*   Updated: 2018/11/18 16:06:33 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*tmp;

	i = 0;
	if (!(tmp = (char*)malloc(sizeof(char) * (size + 1))))
		return (0);
	while (i < size)
	{
		tmp[i] = '\0';
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
