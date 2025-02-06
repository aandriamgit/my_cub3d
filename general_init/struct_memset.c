/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_memset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandriam <aandriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:09:08 by aandriam          #+#    #+#             */
/*   Updated: 2025/02/06 17:55:40 by aandriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general_init.h"

void	struct_memset(t_vars *vars)
{
	vars->flags.map_init = 0;
	vars->flags.data_ok = 0;
	vars->data.c = NULL;
	vars->data.f = NULL;
	vars->data.ea = NULL;
	vars->data.we = NULL;
	vars->data.so = NULL;
	vars->data.no = NULL;
	vars->map = NULL;
}
