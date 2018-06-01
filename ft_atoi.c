/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:51:07 by zsigabi           #+#    #+#             */
/*   Updated: 2018/05/25 13:36:41 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	a;
	int	z;
	int i;

	i = 0;
	z = 0;
	a = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
		i++;
	if (str[i] == 45)
		z = 1;
	if (str[i] == 45 || str[i] == 43)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		a *= 10;
		a += ((int)str[i] - 48);
		i++;
	}
	if (z)
		return (-a);
	else
		return (a);
}
