/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modules.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandriam <aandriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:04:32 by aandriam          #+#    #+#             */
/*   Updated: 2025/01/21 15:41:47 by aandriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULES_H
# define MODULES_H

# include "../libft/libft.h"

typedef struct s_vars
{
	int		argc;
	char	**argv;
}			t_vars;

void		ft_perror(char *str, char *tmp, int exit_code, t_vars *vars);

#endif
