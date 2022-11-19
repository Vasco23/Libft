/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:45:03 by vcacador          #+#    #+#             */
/*   Updated: 2022/11/01 17:06:13 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*str1;
	char	*str2;

	str1 = (char *) dest;
	str2 = (char *) src;
	if (str1 > str2)
	{
		while (n-- != 0)
			str1[n] = str2[n];
	}
	else
		ft_memcpy(str1, str2, n);
	return (dest);
}

/* int main()
{
	char dest[] = "olaolaola";
	char src[] = "iiiiiii";
	char *result;
	result = ft_memmove(dest, src, 3);

	printf("%s\n", result);
}  */