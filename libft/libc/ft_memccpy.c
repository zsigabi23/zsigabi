/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 09:10:23 by zsigabi           #+#    #+#             */
/*   Updated: 2018/05/28 08:46:16 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(char *str1, const char *str2, int c, size_t n)
{
	int			i;
	char		*s1;
	const char	*s2;

	i = 0;
	s1 = str1;
	s2 = str2;
	while (i < n)
	{
		s1[i] = s2[i];
		if (s2[i]) == ((unsigned char*)c)
			return (s1 + i + 1);
		i++;
	}
	return (str1);
}
