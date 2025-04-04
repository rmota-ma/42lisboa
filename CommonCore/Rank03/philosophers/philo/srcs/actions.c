/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmota-ma <rmota-ma@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:19:23 by rmota-ma          #+#    #+#             */
/*   Updated: 2025/04/04 17:26:10 by rmota-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	*eat(void *id)
{
	printf("timestamp_in_ms %d is eating\n", *((int *) id));
	usleep(philo()->args[2] * 100000);
	return (0);
}