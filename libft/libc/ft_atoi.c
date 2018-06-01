/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:51:07 by zsigabi           #+#    #+#             */
/*   Updated: 2018/05/30 10:56:32 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(const char *str)
{
	int	a;
	int	z;
	int i;

	i = 0;
	z = 1;
	a = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 45)
		z = -1;
	//if (str[i] == 45 || str[i] == 43)
	//	i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		a *= 10;
		a += ((int)str[i] - 48);
		i++;
	}
	//if (z)
		//return (-a);
	//else
		return (a);
}

int		main()
{
	char str1[] = "-324";
	printf ("%d\n", ft_atoi(str1));
	return (0);
}
