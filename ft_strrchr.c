/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:35:36 by vcacador          #+#    #+#             */
/*   Updated: 2022/11/03 12:59:45 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		lastc;
	int		i;
	char	a;

	a = (char)c;
	lastc = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == a)
		{
			lastc = i;
			i++;
			while (s[i] != a)
			{
				if (s[i++] == '\0')
					return (&((char *)s)[lastc]);
			}
		}
		if (s[i] != a)
			i++;
	}
	if (a == '\0')
		return (&((char *)s)[i]);
	return (0);
}
/* 
int main()
{
	char s[] = "tripouille";
	printf("%s\n", ft_strrchr(s, 'l'));
} */