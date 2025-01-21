/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandriam <aandriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:12:53 by aandriam          #+#    #+#             */
/*   Updated: 2025/01/21 14:33:19 by aandriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	numb_bytes;

	numb_bytes = 0;
	while (s[numb_bytes] != '\0')
	{
		numb_bytes++;
	}
	return (numb_bytes);
}
