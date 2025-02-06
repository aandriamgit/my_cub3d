/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandriam <aandriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:34:59 by aandriam          #+#    #+#             */
/*   Updated: 2025/02/06 23:03:20 by aandriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"
#include "modules/modules.h"

static void	general_init(t_vars *vars, int argc, char **argv)
{
	vars->argv = argv;
	vars->argc = argc;
	struct_memset(vars);
	argv_reading(vars);
	data_saving(vars);
}

int	main(int argc, char **argv)
{
	t_vars	vars;

	general_init(&vars, argc, argv);
}
