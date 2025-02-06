/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_saving.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandriam <aandriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:02:10 by aandriam          #+#    #+#             */
/*   Updated: 2025/02/06 17:13:44 by aandriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general_init.h"

static void	emergency_protocol(char *lol, int fd, t_vars *vars)
{
	char	*tmp;

	tmp = get_next_line(fd);
	while (tmp)
	{
		free(tmp);
		tmp = get_next_line(fd);
	}
	close(fd);
	free(lol);
	ft_perror("Error\n", "data_init failed\n", 1, vars);
}

static void	data_init(t_vars *vars)
{
	char	*tmp;
	int		fd;
	int		i;

	i = 1;
	fd = open(vars->argv[1], O_RDONLY);
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
		if (data_classification(i, tmp, vars) != 0)
			emergency_protocol(tmp, fd, vars);
		free(tmp);
		tmp = get_next_line(fd);
		i++;
	}
}

static void	raw_map_init(t_vars *vars)
{
	(void)vars;
}

void	data_saving(t_vars *vars)
{
	data_init(vars);
	raw_map_init(vars);
	ft_perror(NULL, NULL, 0, vars);
}
