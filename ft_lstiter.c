/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:45:01 by vcacador          #+#    #+#             */
/*   Updated: 2022/10/31 16:21:36 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		if (lst->next == NULL)
			return ;
		lst = lst->next;
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
	printf(" > the content of next %s\n",(char *) new->content);
	ft_lstadd_back(&lst, new);
	ft_lsttiter(lst, del);
	printf(" > the content of lst %s\n", (char *)lst->content);
	printf(" > the content of next %s\n", (char *) lst->next->content);

} */