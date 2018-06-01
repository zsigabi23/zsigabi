/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 11:51:55 by zsigabi           #+#    #+#             */
/*   Updated: 2018/05/28 08:30:52 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned int	i;
	char			*s1;
	const char		*s2;

	s1 = str1;
	s2 = str2;
	i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (str1);
}
