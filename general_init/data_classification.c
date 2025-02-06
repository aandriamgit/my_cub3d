/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_classification.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandriam <aandriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:34:57 by aandriam          #+#    #+#             */
/*   Updated: 2025/02/05 16:21:04 by aandriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general_init.h"

static int	identified(char **splited, t_vars *vars)
{
	if (ft_strncmp(splited[0], "NO", ft_strlen(splited[0]) == 0)
		&& !vars->data.no)
		vars->data.no = splited[1];
	return (0);
}

static void	clean_up(void)
{
}

int	data_classification(char *tmp, t_vars *vars)
{
	char	**splited;

	splited = ft_split(tmp, ' ');
	free(tmp);
	if (identified(splited, vars))
	{
	}
	else
	{
		clean_up();
		return (1);
	}
	else if (ft_strncmp(splited[0], "SO", ft_strlen(splited[0]) == 0)
			&& !vars->data.so) vars->data.so = splited[1];
	else if (ft_strncmp(splited[0], "WE", ft_strlen(splited[0]) == 0)
			&& !vars->data.we) vars->data.we = splited[1];
	else if (ft_strncmp(splited[0], "WE", ft_strlen(splited[0]) == 0)
			&& !vars->data.we) vars->data.we = splited[1];
	else if (ft_strncmp(splited[0], "WE", ft_strlen(splited[0]) == 0)
			&& !vars->data.we) vars->data.we = splited[1];
	else if (ft_strncmp(splited[0], "WE", ft_strlen(splited[0]) == 0)
			&& !vars->data.we) vars->data.we = splited[1];
	else return (1);
	return (0);
}
