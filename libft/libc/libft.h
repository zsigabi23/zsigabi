/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 14:02:05 by zsigabi           #+#    #+#             */
/*   Updated: 2018/05/29 14:47:08 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef "LIBFT_H"
# define "LIBFT_H"

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(const char *str);
void	*ft_bzero(char *str, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memcpy(void *str1, const void *str2, size_t n);
void	*ft_memchr(const void, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memccpy(char *str1, const char *str2, int c, size_t n);
void	*ft_memmove(void *str1, const void *str2, size_t n);
void	*ft_memset(char *str, int c, size_t n);
void 	*ft_strcat(char *dest, const char *src);
void	*ft_strchr(char *str, int c);
int		*ft_strcmp(char *s1, char *s2);
void	*ft_strcpy(char *s1, char *s2);
void	*ft_strdup(const char *src);
void	*ft_strlcat(char *dst, const char *src, size_t size);
void	ft_strlen(char *str);
void	*ft_strncat(char *dest, const char *src, size_t n);
void	*ft_strncmp(char *s1, char *s2, size_t n);
void	*ft_strncpy(char *s1, char *s2, szie_t n);
void	*ft_strnstr(const char *s1, const char *s2, size_t n);
void	*ft_strrchr(char *str, int c);
void	*ft_strstr(const char *s1, const char *s2);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
