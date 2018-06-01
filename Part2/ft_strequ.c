/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 17:33:57 by zsigabi           #+#    #+#             */
/*   Updated: 2018/05/30 15:01:25 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_strequ(char const *s1, char const *s2)
{
	int		i;

	i = 0;
	if (s1 && s2)
	{
		while (s1[i] != 0)
		{
			i++;
			if (s1[i] != s2[i])
				return (0);
		}
		return (1);
	}
	return (0);
}

int		main()
{
	char str1[] = "zolile";
	char str2[] = "Sigabi";
	printf ("%d\n", *ft_strequ(str1, str2));
	return (0);
}
