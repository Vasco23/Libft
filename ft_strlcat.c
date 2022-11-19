/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:03:14 by vcacador          #+#    #+#             */
/*   Updated: 2022/10/31 16:35:08 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s;
	size_t	d;

	d = ft_strlen(dst);
	s = 0;
	if (dstsize <= d)
		return (dstsize + ft_strlen(src));
	while (src[s] != '\0' && d + 1 < dstsize)
	{
		dst[d] = src[s];
		s++;
		d++;
	}
	dst[d] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[s]));
}

/* int main()
{
	char dst[] = "vssssxsxsx";
	char src[] = "z";
	printf("%ld\n", ft_strlcat(dst, src, 6));
	printf("%ld\n", strlcat(dst, src, 6));
} */