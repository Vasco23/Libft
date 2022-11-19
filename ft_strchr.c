/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:59:07 by vcacador          #+#    #+#             */
/*   Updated: 2022/11/04 10:52:47 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	a;

	i = 0;
	a = (char)c;
	while ((s[i] && s[i] != a))
		i++;
	if (s[i] == a)
		return (&((char *)s)[i]);
	return (0);
}
