/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:50:40 by vcacador          #+#    #+#             */
/*   Updated: 2022/10/31 16:20:51 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	if (*lst != NULL)
		new->next = *lst;
	*lst = new;
}

/* int main()
{
	t_list *lst[1] = {ft_lstnew("akakaka")};
	t_list *new;
	
	new = ft_lstnew("sdds");
	ft_lstadd_front(lst, new);
	printf("\n> lst %s\n", (char *)new->content);
	printf("\n> lst %p\n", new->next);
	printf("\n> lst %s\n", (char *)new->next->content);
	printf("\n> lst %p\n", *lst);
}
 */