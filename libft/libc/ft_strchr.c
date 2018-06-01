/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:03:23 by zsigabi           #+#    #+#             */
/*   Updated: 2018/05/28 08:58:49 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strchr(char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == '\0')
		{
			return (0);
		}
		str++;
	}
	return ((char*)str);
}