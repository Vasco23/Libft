/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:22:19 by vcacador          #+#    #+#             */
/*   Updated: 2022/10/31 16:22:35 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
			lst = lst->next;
	return (lst);
}

/* int main()
{
	t_list *lst[1] = {ft_lstnew("akakaka")};
	t_list *new;
	
	new = ft_lstnew("sdds");
	ft_lstadd_front(lst, new);
	printf("\n\n > lst %s\n", ft_lstlast(new));
} */