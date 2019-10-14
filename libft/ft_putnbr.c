/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 17:05:52 by thparlos          #+#    #+#             */
/*   Updated: 2018/11/15 17:53:13 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	long int lnb;

	lnb = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		lnb = -lnb;
	}
	if (lnb >= 10)
	{
		ft_putnbr(lnb / 10);
		ft_putnbr(lnb % 10);
	}
	if (lnb <= 9)
	{
		ft_putchar(lnb + 48);
	}
}
