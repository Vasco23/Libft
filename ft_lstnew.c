/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:52:18 by vcacador          #+#    #+#             */
/*   Updated: 2022/10/31 16:24:08 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newguy;

	newguy = malloc(sizeof(t_list));
	if (!newguy)
		return (NULL);
	newguy->content = content;
	newguy->next = NULL;
	return (newguy);
}

/* int main()
{
	printf("\n\n ...Started...\n\n\n");
	t_list *newguy = NULL;
	void *content = "fhhhj";
	newguy = ft_lstnew(content);
	printf("\n > newguy < --> %p", newguy);
	printf("\n > newguy age < --> %s",(char *)newguy->content);
	printf("\n > newguy next < --> %p", newguy->next);
	free(newguy);
	newguy = NULL;
	printf("\n > newguy < --> %p\n", newguy);
} */