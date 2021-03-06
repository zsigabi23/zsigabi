/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 13:58:04 by zsigabi           #+#    #+#             */
/*   Updated: 2018/05/30 08:48:59 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_striter(char *s,void (*f)(char *))
{
	if (s == '\0' || f == '\0')
		return (0);
	while (s != '\0' && *s)
		f(s++);
}
