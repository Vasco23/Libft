/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:51:05 by vcacador          #+#    #+#             */
/*   Updated: 2022/10/31 16:21:05 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ola;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		ola = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ola;
	}
}

/* int main()
{
	t_list *lst = {ft_lstnew("akakaka")};
	t_list *new;
	void *del;
	del = '\0';
	char str[] = "oif";
	
	new = ft_lstnew(&str);
	printf("\n\n > the content of lst %s\n", (char *)lst->content);
	printf(" > the pointer of next %p\n", lst->next);
	printf(" > the pointer of new %p\n", new);
	ft_lstadd_back(&lst, new);
	ft_lstclear(&lst, del);
	printf(" > the content of lst %s\n", (char *)lst->content);
	printf(" > the pointer of next %p\n", lst->next);
} */