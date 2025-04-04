/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmota-ma <rmota-ma@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:50:29 by rmota-ma          #+#    #+#             */
/*   Updated: 2025/03/24 16:40:58 by rmota-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

void	error(void)
{
	perror("Error");
	close_fds();
	exit(1);
}

void	error_env(char **cmd1)
{
	perror("Error");
	if (cmd1)
		ft_free(cmd1);
	close_fds();
	exit(127);
}

void	execve_error(char *path, char **cmd1)
{
	perror("Error");
	if (!cmd1[1])
		free(cmd1);
	else
		ft_free(cmd1);
	if (path)
		free(path);
	close_fds();
	exit(127);
}

void	close_fds(void)
{
	int	var;

	var = 3;
	while (var < 1024)
	{
		close(var);
		var++;
	}
}

void	waitpids(int *pids, int argc)
{
	int	var;

	var = 0;
	while (var < argc)
	{
		waitpid(pids[var], NULL, 0);
		var++;
	}
}
