/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmota-ma <rmota-ma@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:25:11 by rmota-ma          #+#    #+#             */
/*   Updated: 2024/11/04 17:26:28 by rmota-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	var;

	var = 0;
	while (s[var] != '\0')
	{
		write(fd, &s[var], 1);
		var++;
	}
	write(fd, "\n", 1);
}
