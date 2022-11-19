/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:01:49 by vcacador          #+#    #+#             */
/*   Updated: 2022/11/02 17:52:10 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		v;
	char	*newstr;

	i = 0;
	v = 0;
	newstr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!newstr)
		return (NULL);
	if (s1 == 0 && s2 == 0)
		return (NULL);
	while (s1[v])
	{
		newstr[i] = s1[v];
		i++;
		v++;
	}
	v = 0;
	while (s2[v])
		newstr[i++] = s2[v++];
	newstr[i] = '\0';
	return (newstr);
}

/* #include <stdio.h>

int main()
{
	char s1[] = "ola";
	char s2[] = "jajaja";
	printf("%s\n", ft_strjoin(s1, s2));
} */