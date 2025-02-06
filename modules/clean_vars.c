/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_vars.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandriam <aandriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:13:35 by aandriam          #+#    #+#             */
/*   Updated: 2025/02/06 16:13:42 by aandriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "modules.h"

static void	clean_data(t_vars *vars)
{
	if (vars->data.c != NULL)
		free(vars->data.c);
	if (vars->data.f != NULL)
		free(vars->data.f);
	if (vars->data.ea != NULL)
		free(vars->data.ea);
	if (vars->data.we != NULL)
		free(vars->data.we);
	if (vars->data.so != NULL)
		free(vars->data.so);
	if (vars->data.no != NULL)
		free(vars->data.no);
}

void	clean_vars(t_vars *vars)
{
	clean_data(vars);
}
