/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmota-ma <rmota-ma@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:50:11 by rmota-ma          #+#    #+#             */
/*   Updated: 2025/02/21 15:56:02 by rmota-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <fcntl.h>
# include <stdio.h>

# define LC_HEX "0123456789abcdef"
# define UP_HEX "0123456789ABCDEF"
# define DEC "0123456789"
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

//FT_PRINTF
int	ft_printf(const char *s, ...);
int	ft_putchar_fd(int c, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_putunbr_base_fd(unsigned long bnb, int fd, char *base, unsigned int bs);
int	ft_putperc_fd(int fd);
int	ft_check_char(const char *s, va_list args);
int	ft_putnbr_base_fd(int n, int fd, char *base, int bs);
int	ft_putptr_fd(void *n, int fd, char *base, unsigned int bs);

//SRCS


#endif