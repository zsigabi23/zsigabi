/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 12:13:43 by zsigabi           #+#    #+#             */
/*   Updated: 2018/05/29 16:22:39 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (s2[i] == '\0')
		return ((char*)s1);
	while (i < n && s1[i] != '\0')
	{
		while (s2[z] != '\0')
		{
			if (i + z >= n || s1[i + z] != s2[i])
			z++;
		}
		if (s2[i] == '\0')
			return ((char*)(s1 + 1));
		i++;
	}
	return (0);
}

int		main()
{
	char str1[] = "PointTutorial";
	char str2[] = "a";
	printf ("%s\n", ft_strnstr(str1, str2, 12));
	return (0);
}
