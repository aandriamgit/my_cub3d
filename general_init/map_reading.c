/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reading.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandriam <aandriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:01:00 by aandriam          #+#    #+#             */
/*   Updated: 2025/01/21 17:18:12 by aandriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general_init.h"

static int	correct_extension(t_vars *vars)
{
	int		len;
	int		len_save;
	int		i;
	char	buff[5];

	i = 0;
	len = ft_strlen(vars->argv[1]);
	len_save = len;
	if (len <= 4)
		return (0);
	len--;
	while (i < 5)
	{
		buff[i] = vars->argv[1][len];
		len--;
		i++;
	}
	buff[4] = '\0';
	if (ft_strncmp(buff, "buc.", len_save) == 0)
		return (1);
	return (0);
}

void	map_reading(t_vars *vars)
{
	if (vars->argc != 2)
		ft_perror("Error\n", "map_reading_one", 1, vars);
	else if (!correct_extension(vars))
		ft_perror("Error\n", "extension_incorrect", 1, vars);
}
