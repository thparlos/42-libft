/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 11:35:53 by thparlos          #+#    #+#             */
/*   Updated: 2018/11/16 11:39:53 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*a_effacer;
	t_list	*prochain_maillon;

	a_effacer = *alst;
	while (a_effacer)
	{
		prochain_maillon = a_effacer->next;
		del(a_effacer->content, a_effacer->content_size);
		free(a_effacer);
		a_effacer = prochain_maillon;
	}
	*alst = NULL;
}
