/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:46:01 by vcacador          #+#    #+#             */
/*   Updated: 2022/10/31 16:06:03 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ola;

	ola = malloc(nmemb * size);
	if (ola == NULL)
		return (0);
	ft_memset(ola, '\0', nmemb * size);
	return (ola);
}

/* int main()
{
	char *ola;
	ola = ft_calloc(sizeof(char), 7);
	ft_memset(ola, 's', 5);
	printf("String - %s\n", ola);
} */