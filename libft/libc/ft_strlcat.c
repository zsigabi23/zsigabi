/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fft_strlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:05:05 by zsigabi           #+#    #+#             */
/*   Updated: 2018/05/30 16:48:27 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		itr;
	size_t		i;

	itr = 0;
	i = 0;
	while(itr < size && dst[itr])
		itr++;
	if (itr < size)
	{
		while (src[i] && (itr + i - 1) < size)
		{
			dst[itr + i] = src[i];
			i++;
		}
		dst[itr + i] = '\0';
	}
	return(strlen(src) + itr);
}

int		main(void)
{
	char *str;
	char *ptr = " World!";
	size_t len = 50;
	str = malloc(sizeof(char) * (len));
	str = memset(str, 0, len);
	str = memmove(str, "Hello", 5);
	printf("%zu return value for strlcat\n", ft_strlcat(str, ptr, len));
	printf("%s\n", str);
	return (0);
}
