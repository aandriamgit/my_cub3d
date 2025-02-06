/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandriam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 12:58:09 by aandriam          #+#    #+#             */
/*   Updated: 2025/02/05 11:56:31 by aandriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*pointer;
	size_t	i;

	i = 0;
	pointer = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			pointer = (char *)&s[i];
			return (pointer);
		}
		i++;
	}
	if ((char)c == '\0')
	{
		pointer = (char *)&s[i];
	}
	return (pointer);
}
