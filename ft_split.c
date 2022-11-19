/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:58:21 by vcacador          #+#    #+#             */
/*   Updated: 2022/11/03 15:39:18 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_recursive(char const*s, char c, int count, char **list)
{
	char	*str;
	int		i;

	str = NULL;
	i = 0;
	while (s && *s && *s == c)
		s++;
	while (s && s[i] && s[i] != c)
		i++;
	if (i > 0)
		str = malloc(sizeof(char) * i + 1);
	if (str)
		str[i] = '\0';
	i = 0;
	while (str && s && *s && *s != c)
		str[i++] = *s++;
	if (str)
		list = ft_recursive(s, c, count + 1, list);
	else
		list = malloc(sizeof(char *) * (count + 1));
	if (list)
		list[count] = str;
	return (list);
}

char	**ft_split(char const *s, char c)
{
	return (ft_recursive(s, c, 0, NULL));
}
