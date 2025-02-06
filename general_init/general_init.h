/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_init.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandriam <aandriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:13:08 by aandriam          #+#    #+#             */
/*   Updated: 2025/02/06 15:40:43 by aandriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GENERAL_INIT_H
# define GENERAL_INIT_H

# include "../modules/modules.h"

void	argv_reading(t_vars *vars);
void	data_saving(t_vars *vars);
int		data_classification(int i, char *tmp, t_vars *vars);
void	struct_memset(t_vars *vars);

#endif
