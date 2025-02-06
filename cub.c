/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandriam <aandriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:34:59 by aandriam          #+#    #+#             */
/*   Updated: 2025/02/05 11:48:56 by aandriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

static void	general_init(t_vars *vars, int argc, char **argv)
{
	vars->argv = argv;
	vars->argc = argc;
	map_reading(vars);
	data_saving(vars);
}

int	main(int argc, char **argv)
{
	t_vars	vars;

	general_init(&vars, argc, argv);
}
