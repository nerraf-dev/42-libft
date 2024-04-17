/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:13:15 by sfarren           #+#    #+#             */
/*   Updated: 2024/04/17 11:50:53 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned long long	t_size;

int			ft_atoi(const char *str);
void		ft_bzero(void *s, t_size n);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
// void		*ft_memchr(const void *s, int c, t_size n);
// int			ft_memcmp(const void *s1, const void *s2, t_size n);
// void		*ft_memcpy(void *dest, const void *src, t_size n);
// void		*ft_memmove(void *dest, const void *src, t_size n);
void		*ft_memset(void *mem, int c, t_size len);
char		*ft_strchr(const char *s, int c);
t_size		ft_strlcat(char *dest, const char *src, t_size size);
t_size		ft_strlcpy(char *dest, const char *src, t_size size);
t_size		ft_strlen(const char *str);
int			ft_strncmp(const char *s1, const char *s2, t_size n);
char		*ft_strnstr(const char *content,
									const char	*search_str, t_size len);
char		*ft_strrchr(const char *s, int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
#endif