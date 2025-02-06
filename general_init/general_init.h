/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_init.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandriam <aandriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:13:08 by aandriam          #+#    #+#             */
/*   Updated: 2025/02/05 14:35:30 by aandriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GENERAL_INIT_H
# define GENERAL_INIT_H

# include "../modules/modules.h"

void	map_reading(t_vars *vars);
void	data_saving(t_vars *vars);
int		data_classification(char *tmp, t_vars *vars);

#endif
