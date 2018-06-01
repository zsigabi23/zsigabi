/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 11:07:55 by zsigabi           #+#    #+#             */
/*   Updated: 2018/05/31 16:30:30 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	str = (char*)malloc(sizeof(str) * i);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[0] == ' ' || s[0] == '\t' || s[0] == '\n')
		{
			str[i] = s[i + 1];
			i++;
		}
		else if (s['\0' - 1] == ' ' || s['\0' -1] == '\t' || s['\0' - 1] == '\n')
		{
			str[i] = s[i + 1];
			i++;
		}
		else
			str[i] = s[i];
	}
	return (str);
}

int		main(void)
{
	printf ("%s\n", ft_strtrim("\nZolile	"));
	return (0);
}
