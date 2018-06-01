/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 12:11:30 by zsigabi           #+#    #+#             */
/*   Updated: 2018/05/28 08:54:10 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memmove(void *str1, const void *str2, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	i;

	s1 = (char*)str1;
	s2 = (char*)str2;
	i = 0;
	if (s2[i] < s1[i])
	{
		while (n--)
			s1[i] = s2[2];
	}
	else
		ft_memcpy(s1, s2, n);
	return (s1[i]);
}
