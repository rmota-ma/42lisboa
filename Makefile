# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmota-ma <rmota-ma@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 17:45:51 by rmota-ma          #+#    #+#              #
#    Updated: 2024/11/14 13:31:02 by rmota-ma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRCS =	ft_printf.c functions/ft_putchar_fd.c functions/ft_putunbr_base_fd.c\
		functions/ft_putstr_fd.c functions/ft_putptr_fd.c\
		functions/ft_check_char.c functions/ft_putnbr_base_fd.c\
		
OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re