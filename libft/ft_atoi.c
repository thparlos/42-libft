/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 18:38:26 by thparlos          #+#    #+#             */
/*   Updated: 2018/11/18 16:18:17 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	long int	resultat;
	int			signe;

	i = 0;
	resultat = 0;
	signe = 1;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) || str[i] == 127)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		resultat = resultat * 10 + (str[i] - 48);
		i++;
	}
	resultat = resultat * signe;
	return (resultat);
}
