/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:24:50 by zsigabi           #+#    #+#             */
/*   Updated: 2018/05/28 08:56:56 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	while (dest[i] != '\0')
		i++;
	while (src[z] != '\0')
	{
		dest[i + z] = src[z];
		z++;
	}
	dest[i + z] = '\0';
	return (dest);
}
