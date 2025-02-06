/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modules.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandriam <aandriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:04:32 by aandriam          #+#    #+#             */
/*   Updated: 2025/02/06 18:00:13 by aandriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULES_H
# define MODULES_H

# include "../get_next_line/get_next_line.h"
# include "../libft/libft.h"

typedef struct s_data
{
	char						*no;
	char						*so;
	char						*we;
	char						*ea;
	char						*f;
	char						*c;
}								t_data;

typedef struct s_flag
{
	int							map_init;
	int							data_ok;
}								t_flag;

typedef struct s_raw_map
{
	char						*str;
	int							str_len;
	typedef struct s_raw_map	*next;
}								t_raw_map;

typedef struct s_vars
{
	int							argc;
	char						**argv;
	t_data						data;
	char						**map;
	t_flag						flags;
	t_raw_map					*raw_map;
}								t_vars;

void							ft_perror(char *str, char *tmp, int exit_code,
									t_vars *vars);
void							clean_vars(t_vars *vars);
void							ptrptr_free(char ***lol);

#endif
