/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-rio <pdel-rio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:35:11 by pdel-rio          #+#    #+#             */
/*   Updated: 2025/07/08 17:40:42 by pdel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 256
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <stddef.h>
# include <stdint.h>

char		*get_next_line(int fd);
size_t		ft_strlen(char *s);
char		*ft_strchr(char *s, int c);
void		*ft_memcpy(char *dst, char *src, size_t n);
char		*ft_strjoin(char *s1, char *s2);
void		*ft_calloc(size_t nmemb, size_t size);
# endif
