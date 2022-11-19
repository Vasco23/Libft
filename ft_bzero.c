/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:45:24 by vcacador          #+#    #+#             */
/*   Updated: 2022/11/01 17:07:15 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *str, size_t n)
{
	ft_memset(str, '\0', n);
	return (str);
}

/* #include <string.h>
#include <unistd.h>

int main()
{
	char str[50];
	
	strcpy(str,"This is string.h library function");
    puts(str);

    ft_bzero(str, 3);
	int i = 0;
	int len = strlen(str);
    while (i < len)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
 */