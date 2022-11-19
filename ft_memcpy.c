/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:27:28 by vcacador          #+#    #+#             */
/*   Updated: 2022/11/02 17:47:31 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest_str, const void *src_str, size_t number)
{
	size_t	i;
	char	*dest_str1;
	char	*src_str1;

	i = 0;
	dest_str1 = (char *)dest_str;
	src_str1 = (char *)src_str;
	if (!dest_str && !src_str && number >= 0)
		return (0);
	while (i < number)
	{
		dest_str1[i] = src_str1[i];
		i++;
	}
	return (dest_str1);
}

/* int main()
{
	char dest[] = "olaolaola";
	char src[] = "iaiiiii";
	char *result;
	result = ft_memcpy(dest, src, 3);
	printf("%s\n", result);
} */