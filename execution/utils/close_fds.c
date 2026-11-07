/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   close_fds.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: petya <petya@student.42.fr>                  +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/06 16:24:03 by pekatsar      #+#    #+#                 */
/*   Updated: 2025/05/15 16:11:24 by pekatsar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

/**
 * From fd3 to fd 1024: close all, if already closed: get -1,
 *  as long as i try to open again is acceptable
 */
void	close_all_pipe_fds(void)
{
	int	fd;

	fd = 3;
	while (fd < 1024)
	{
		close(fd);
		fd++;
	}
}
