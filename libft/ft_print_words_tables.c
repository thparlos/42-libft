/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 18:43:16 by thparlos          #+#    #+#             */
/*   Updated: 2018/11/18 15:50:39 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[j])
	{
		i = 0;
		while (tab[j][i])
		{
			ft_putchar(tab[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
