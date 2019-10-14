/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:45:51 by thparlos          #+#    #+#             */
/*   Updated: 2018/11/20 15:13:32 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*newstr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		if ((newstr = (char *)malloc(sizeof(char) * (len + 1))))
		{
			while (s1[i])
			{
				newstr[i] = s1[i];
				i++;
			}
			while (s2[j])
				newstr[i++] = s2[j++];
			newstr[i] = '\0';
			return (newstr);
		}
	}
	return (NULL);
}
