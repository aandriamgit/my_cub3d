/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modules.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandriam <aandriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:04:32 by aandriam          #+#    #+#             */
/*   Updated: 2025/02/05 14:10:38 by aandriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULES_H
# define MODULES_H

# include "../get_next_line/get_next_line.h"
# include "../libft/libft.h"

typedef struct s_data
{
	char	*no;
	char	*so;
	char	*we;
	char	*ea;
	char	*f;
	char	*c;
}			t_data;

typedef struct s_vars
{
	int		argc;
	char	**argv;
	t_data	data;
	char	**map;
}			t_vars;

void		ft_perror(char *str, char *tmp, int exit_code, t_vars *vars);

#endif
