/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptrptr_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandriam <aandriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:30:31 by aandriam          #+#    #+#             */
/*   Updated: 2025/02/06 16:46:13 by aandriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "modules.h"

void	ptrptr_free(char ***lol)
{
	int		i;
	char	**tmp;

	tmp = *lol;
	i = 0;
	while (tmp[i])
	{
		free(tmp[i]);
		i++;
	}
	free(tmp);
}
