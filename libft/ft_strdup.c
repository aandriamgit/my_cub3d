/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandriam <aandriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:11:54 by aandriam          #+#    #+#             */
/*   Updated: 2025/02/06 16:46:51 by aandriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len_s;
	char	*strcopy;

	i = 0;
	len_s = ft_strlen(s);
	strcopy = malloc(sizeof(char) * (len_s + 1));
	if (strcopy == 0)
		return (NULL);
	while (s[i] != 0)
	{
		strcopy[i] = s[i];
		i++;
	}
	strcopy[i] = '\0';
	return (strcopy);
}
