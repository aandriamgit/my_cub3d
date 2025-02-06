/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandriam <aandriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:18:34 by aandriam          #+#    #+#             */
/*   Updated: 2025/02/05 11:59:43 by aandriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_trim;
	size_t	i;
	size_t	j;
	size_t	len;

	j = ft_strlen(s1);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (j > i && ft_strchr(set, s1[j]) != NULL)
		j--;
	len = j - i;
	new_trim = ft_substr(s1, (unsigned int)i, (len + 1));
	return (new_trim);
}

void	my_strtrim(char **s1, char const *set)
{
	char	*new_trim;

	new_trim = ft_strtrim(*s1, set);
	free(*s1);
	*s1 = new_trim;
}
