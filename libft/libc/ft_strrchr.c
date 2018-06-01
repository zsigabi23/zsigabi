/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 10:01:41 by zsigabi           #+#    #+#             */
/*   Updated: 2018/05/28 09:12:58 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	*ft_strrchr(char *str, int c)
{
	while (ft_strlen(str) >= 0)
	{
		if (*str == c)
			return (str);
		if (!*str)
			return (NULL);
		str--;
	}
	return (0);
}
