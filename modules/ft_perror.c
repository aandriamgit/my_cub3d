/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perror.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandriam <aandriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:03:12 by aandriam          #+#    #+#             */
/*   Updated: 2025/01/21 16:36:32 by aandriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "modules.h"

static int	get_random_int(int argc)
{
	long	res;
	int		tmp;
	char	*random_char;

	tmp = argc;
	random_char = malloc(tmp);
	res = (tmp % 101 + 101) % 101;
	res = res * (size_t)random_char % 101;
	free(random_char);
	random_char = NULL;
	return (res);
}

static void	map_reading_stderr(int random_int)
{
	if (random_int >= 0 && random_int <= 29)
		ft_putstr_fd("The program needs two arguments, try again\n", 2);
	else if (random_int >= 30 && random_int <= 39)
		ft_putstr_fd("Only two arguments are accepted\n", 2);
	else if (random_int >= 40 && random_int <= 49)
		ft_putstr_fd("Seems you don't know the rules yet, or ur testing me\n",
			2);
	else if (random_int >= 50 && random_int <= 59)
		ft_putstr_fd("Two is the harmony that brings Cube3D to life\n", 2);
	else if (random_int >= 60 && random_int <= 69)
		ft_putstr_fd("42 is the answer, but 2 is the correct number\n", 2);
	else if (random_int >= 70 && random_int <= 80)
		ft_putstr_fd("I thimk you made a misteke\n", 2);
	else
		ft_putstr_fd("Try with two arguments :)\n", 2);
}

static void	print_random_message(int id, int random_int)
{
	if (id == 1)
		map_reading_stderr(random_int);
}

void	ft_perror(char *str, char *tmp, int exit_code, t_vars *vars)
{
	ft_putstr_fd(str, 2);
	if (ft_strncmp(tmp, "map_reading_one", ft_strlen(tmp)) == 0)
		print_random_message(1, get_random_int(vars->argc));
	else
		ft_putstr_fd(tmp, 2);
	exit(exit_code);
}
