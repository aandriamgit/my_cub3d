/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perror.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandriam <aandriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:03:12 by aandriam          #+#    #+#             */
/*   Updated: 2025/02/06 16:28:33 by aandriam         ###   ########.fr       */
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

static void	not_two_args(int random_int)
{
	if (random_int >= 0 && random_int <= 29)
		ft_putstr_fd("The program needs one argument, try again\n", 2);
	else if (random_int >= 30 && random_int <= 39)
		ft_putstr_fd("Only one argument is accepted\n", 2);
	else if (random_int >= 40 && random_int <= 49)
		ft_putstr_fd("Seems you don't know the rules yet, or ur testing me\n",
			2);
	else if (random_int >= 50 && random_int <= 59)
		ft_putstr_fd("Find inner peace to bring Cube3D to life\n", 2);
	else if (random_int >= 60 && random_int <= 69)
		ft_putstr_fd("Why you're doing this ?\n", 2);
	else if (random_int >= 70 && random_int <= 80)
		ft_putstr_fd("I thimk you made a misteke\n", 2);
	else
		ft_putstr_fd("Try with one argument :)\n", 2);
}

static void	not_correct_extension(int random_int)
{
	if (random_int >= 0 && random_int <= 29)
		ft_putstr_fd("extension incorrect 1\n", 2);
	else if (random_int >= 30 && random_int <= 39)
		ft_putstr_fd("extension incorrect 2\n", 2);
	else if (random_int >= 40 && random_int <= 49)
		ft_putstr_fd("extension incorrect 3\n", 2);
	else if (random_int >= 50 && random_int <= 59)
		ft_putstr_fd("extension incorrect 4\n", 2);
	else if (random_int >= 60 && random_int <= 69)
		ft_putstr_fd("extension incorrect 5\n", 2);
	else if (random_int >= 70 && random_int <= 80)
		ft_putstr_fd("extension incorrect 6\n", 2);
	else
		ft_putstr_fd("extension incorrect 7\n", 2);
}

static void	print_random_message(int id, int random_int)
{
	if (id == 1)
		not_two_args(random_int);
	else if (id == 2)
		not_correct_extension(random_int);
}

void	ft_perror(char *str, char *tmp, int exit_code, t_vars *vars)
{
	if (str || tmp)
	{
		if (str)
		{
			ft_putstr_fd(str, 2);
			if (ft_strncmp(tmp, "map_reading_one", ft_strlen(tmp)) == 0)
				print_random_message(1, get_random_int(vars->argc));
			else if (ft_strncmp(tmp, "extension_incorrect",
					ft_strlen(tmp)) == 0)
				print_random_message(2, get_random_int(vars->argc));
		}
		else if (tmp)
			ft_putstr_fd(tmp, 2);
	}
	clean_vars(vars);
	exit(exit_code);
}
