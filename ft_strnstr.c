/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:06:31 by vcacador          #+#    #+#             */
/*   Updated: 2022/11/01 17:16:39 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			if (ft_strncmp((&haystack[i]), needle, ft_strlen(needle)) == 0)
			{
				i += (ft_strlen(needle));
				if (i > len)
					return ((void *)0);
				return (&((char *)haystack)[i - ft_strlen(needle)]);
			}
		}
		i++;
	}
	return ((void *)0);
}
