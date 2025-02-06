/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandriam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:02:25 by aandriam          #+#    #+#             */
/*   Updated: 2025/02/05 11:53:07 by aandriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*point;
	size_t	i;

	i = 0;
	point = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			point = (char *)&s[i];
		}
		i++;
	}
	if ((char)c == '\0')
	{
		point = (char *)&s[i];
	}
	return (point);
}
