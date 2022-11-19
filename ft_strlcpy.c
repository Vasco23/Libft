/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:03:31 by vcacador          #+#    #+#             */
/*   Updated: 2022/10/31 16:35:17 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (destsize == 0)
		return (ft_strlen(src));
	while (src[j] && j + 1 < destsize)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/* int main()
{
	char dest[] = "olapooa";
	char src[] = "adeus";
	printf("> %ld\n",  ft_strlcyp(dest, src, 5));
}
 */

/* void		ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

static void		check_strlcpy(char *dest, char *src, int size, int dest_len)
{
	ft_print_result(ft_strlcpy(dest, src, size));
	write(1, "\n", 1);
	write(1, dest, dest_len);
	free(dest);
}

int				main(int argc, const char *argv[])
{
	char	*dest;
	int		arg;
	int		dest_len;

	alarm(5);
	dest_len = 15;
	if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)) || argc == 1)
		return (0);
	memset(dest, 0, dest_len);
	memset(dest, 'r', 6);
	if ((arg = atoi(argv[1])) == 1)
		check_strlcpy(dest, "lorem", 15, dest_len);
	else if (atoi(argv[1]) == 2)
		check_strlcpy(dest, "", 15, dest_len);
	else if (atoi(argv[1]) == 3)
		check_strlcpy(dest, "lorem ipsum", 3, dest_len);
	else if (atoi(argv[1]) == 4)
		check_strlcpy(dest, "lorem ipsum dolor sit amet", 15, dest_len);
	else if (atoi(argv[1]) == 5)
		check_strlcpy(dest, "lorem ipsum dolor sit amet", 0, dest_len);
	return (0);
} */