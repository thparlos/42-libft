/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:20:59 by thparlos          #+#    #+#             */
/*   Updated: 2018/11/15 22:34:02 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int lnb;

	lnb = n;
	if (lnb < 0)
	{
		ft_putchar_fd('-', fd);
		lnb = -lnb;
	}
	if (lnb >= 10)
	{
		ft_putnbr_fd(lnb / 10, fd);
		ft_putnbr_fd(lnb % 10, fd);
	}
	if (lnb <= 9)
	{
		ft_putchar_fd(lnb + 48, fd);
	}
}
