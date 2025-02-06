/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_classification.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandriam <aandriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:34:57 by aandriam          #+#    #+#             */
/*   Updated: 2025/02/06 17:02:22 by aandriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general_init.h"

static int	is_valid(int len, char **splited, t_vars *vars)
{
	if (ft_strncmp(splited[0], "NO", len) == 0 && !vars->data.no)
		return (0);
	else if (ft_strncmp(splited[0], "SO", len) == 0 && !vars->data.so)
		return (0);
	else if (ft_strncmp(splited[0], "WE", len) == 0 && !vars->data.we)
		return (0);
	else if (ft_strncmp(splited[0], "C", len) == 0 && !vars->data.c)
		return (0);
	else if (ft_strncmp(splited[0], "F", len) == 0 && !vars->data.f)
		return (0);
	else if (ft_strncmp(splited[0], "EA", len) == 0 && !vars->data.ea)
		return (0);
	else
		return (1);
	return (0);
}

static int	go_check_data(int len, int lol, char **splited, t_vars *vars)
{
	if (is_valid(len, splited, vars) == 0)
	{
		if (ft_strncmp(splited[0], "NO", len) == 0)
			vars->data.no = ft_substr(splited[1], 0, lol);
		else if (ft_strncmp(splited[0], "SO", len) == 0)
			vars->data.so = ft_substr(splited[1], 0, lol);
		else if (ft_strncmp(splited[0], "WE", len) == 0)
			vars->data.we = ft_substr(splited[1], 0, lol);
		else if (ft_strncmp(splited[0], "C", len) == 0)
			vars->data.c = ft_substr(splited[1], 0, lol);
		else if (ft_strncmp(splited[0], "F", len) == 0)
			vars->data.f = ft_substr(splited[1], 0, lol);
		else if (ft_strncmp(splited[0], "EA", len) == 0)
			vars->data.ea = ft_substr(splited[1], 0, lol);
	}
	else
		return (1);
	if (vars->data.ea && vars->data.we && vars->data.so && vars->data.no
		&& vars->data.c && vars->data.f)
		vars->flags.data_ok = 1;
	return (0);
}

static int	identified(char *tmp, int i, char **splited, t_vars *vars)
{
	int	len;
	int	lol;

	(void)tmp;
	lol = 0;
	if (splited[1])
		lol = ft_strlen(splited[1]) - 1;
	len = ft_strlen(splited[0]);
	if (splited[0][0] == '1' && vars->flags.data_ok)
	{
		if (vars->flags.map_init == 0)
			vars->flags.map_init = i;
		return (0);
	}
	else
		return (go_check_data(len, lol, splited, vars));
}

int	data_classification(int i, char *tmp, t_vars *vars)
{
	char	**splited;
	int		res;

	res = 0;
	if (tmp[0] == '\0' || tmp[0] == '\n')
		return (res);
	splited = ft_split(tmp, ' ');
	if (identified(tmp, i, splited, vars) != 0)
		res = 1;
	ptrptr_free(&splited);
	return (res);
}
