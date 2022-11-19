/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:50:29 by vcacador          #+#    #+#             */
/*   Updated: 2022/10/31 16:20:45 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ola;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ola = ft_lstlast(*lst);
	ola->next = new;
}

/* int main()
{
	t_list *lst = {ft_lstnew("akakaka")};
	t_list *new;
	char str[] = "oif";
	
	new = ft_lstnew(&str);
	printf("\n\n > lst %p\n", (char *)lst->content);
	printf(" > lst %p\n", lst->next);
	printf(" > lst %p\n", new);
	ft_lstadd_back(&lst, new);
	printf("\n\n > lst %s\n", (char *)lst->content);
	printf("\n\n > lst %s\n", (char *)lst->next->content);
} */