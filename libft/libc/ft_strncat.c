/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 12:06:48 by zsigabi           #+#    #+#             */
/*   Updated: 2018/05/28 08:57:39 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strncat(char *dest, const char *src, size_t n)
{
	int	i;
	int z;

	i = 0;
	z = 0;
	while (dest[i] != '\0')
		i++;
	while (z < n && src[z])
	{
		dest[i + z] = src[z];
		z++;
	}
	dest[i + z] = '\0';
	return (dest);
}
