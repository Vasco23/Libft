/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:43:47 by vasco             #+#    #+#             */
/*   Updated: 2022/10/31 16:26:11 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/* int main()
{
	t_list *lst[1] = {ft_lstnew("akakaka")};
	t_list *new;
	
	new = ft_lstnew("sdds");
	ft_lstadd_front(lst, new);
	printf("\n\n > lst %d\n",ft_lstsize(new));
}
 */