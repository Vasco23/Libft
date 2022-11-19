/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:56:17 by vcacador          #+#    #+#             */
/*   Updated: 2022/10/31 16:28:43 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*str1;

	i = 0;
	str1 = (char *)str;
	while (i < n)
	{
		str1[i] = c;
		i++;
	}
	return (str);
}

/* #include <string.h>

int main () 
{
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memset(str,'k',10);
   puts(str);
   
   return(0);
} */