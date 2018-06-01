/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 12:39:13 by zsigabi           #+#    #+#             */
/*   Updated: 2018/05/30 15:55:08 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;
	int		z;
	int		sum;
	
	i = 0;
	z = 0;
	sum = strlen((char*)s1) + strlen((char*)s2);
	s = (char*)malloc(sizeof(char) * sum + 1);
	s = (char *)s1;
	if (!s)
		return (0);
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[z] != '\0')
	{
		s[i + z] = s2[z];
		z++;
	}
	s[i + z] = '\0';
	return (s);
}

int		main()
{
	char str1[] = "Zolile";
	char str2[] = "Sigabi";
	printf ("%s\n", ft_strjoin(str1, str2));
	return (0);
}
