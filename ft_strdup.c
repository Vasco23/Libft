/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:37:22 by vcacador          #+#    #+#             */
/*   Updated: 2022/11/01 15:37:27 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;

	dst = (char *)malloc((sizeof(char)) * (ft_strlen(s) + 1));
	if (dst == NULL)
		return (0);
	ft_memcpy(dst, s, ft_strlen(s) + 1);
	return (dst);
}

/* #include <stdio.h>

int main()
{
	char src[] = "olaolaola";
	printf("%s\n", ft_strdup(src));
} */