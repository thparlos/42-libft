/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 18:44:00 by thparlos          #+#    #+#             */
/*   Updated: 2018/11/18 18:31:45 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		y;
	char	tmp;

	y = 0;
	while (str[y] != '\0')
	{
		y++;
	}
	y = y - 1;
	i = 0;
	while (i < y)
	{
		tmp = str[i];
		str[i] = str[y];
		str[y] = tmp;
		i++;
		y--;
	}
	return (str);
}
