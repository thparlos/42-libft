/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 18:06:48 by thparlos          #+#    #+#             */
/*   Updated: 2018/11/20 15:17:50 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int		begin;
	int					finish;

	if (!s)
		return (NULL);
	begin = 0;
	finish = (int)ft_strlen(s) - 1;
	while ((s[begin] == 32 || s[begin] == '\t' || s[begin] == '\n') &&
			s[begin])
		begin++;
	while ((s[finish] == 32 || s[finish] == '\t' || s[finish] == '\n') &&
			s[finish] && finish > (int)begin)
		finish--;
	return (ft_strsub(s, begin, (finish - begin + 1)));
}
