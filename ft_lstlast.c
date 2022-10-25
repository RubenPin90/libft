/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinchas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:27:12 by rpinchas          #+#    #+#             */
/*   Updated: 2022/10/24 14:49:53 by rpinchas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}
/*
int main()
{
	t_list	*head = NULL;
	char	name[] = "Ruben";
	char	name2[] = "Gabriel";

	//head = ft_lstnew(name);
	ft_lstadd_back(&head, ft_lstnew(name));
	ft_lstadd_back(&head, ft_lstnew(name2));
	printf("%d\n", ft_lstsize(head));
	head = ft_lstlast(head);
	//printf("%s\n", (char *)ft_lstlast(head)->content);
	printf("%s\n", (char *)head->content);
	return (0);
}

*/
