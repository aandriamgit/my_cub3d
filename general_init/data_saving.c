/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_saving.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandriam <aandriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:02:10 by aandriam          #+#    #+#             */
/*   Updated: 2025/02/05 14:41:54 by aandriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general_init.h"

static void	emergency_protocol(int fd, t_vars *vars)
{
}

static void	data_init(int fd, t_vars *vars)
{
	char	*tmp;

	tmp = get_next_line(fd);
	if (!tmp)
	{
		if (fd != -1)
			close(fd);
		ft_perror("Error\n", "the file is empty\n", 1, vars);
	}
	while (tmp)
	{
		my_strtrim(&tmp, " ");
		if (data_classification(tmp, vars) != 0)
			emergency_protocol(fd, vars);
		tmp = get_next_line(fd);
	}
}

void	data_saving(t_vars *vars)
{
	int	fd;

	fd = open(vars->argv[1], O_RDONLY);
	vars->data.we = NULL;
	vars->data.so = NULL;
	vars->data.no = NULL;
	vars->data.c = NULL;
	vars->data.f = NULL;
	vars->data.ea = NULL;
	data_init(fd, vars);
}
