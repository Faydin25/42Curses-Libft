/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:37:29 by faydin            #+#    #+#             */
/*   Updated: 2022/02/20 17:35:58 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

#include <stdio.h>
/*
int	main()
{
	t_list *ilk;
	char dizi[] = "ilk content";
	t_list *iki;
	char dizi2[] = "ikinci content";
	ilk = ft_lstnew(dizi);
	iki = ft_lstnew(dizi2);

	ft_lstadd_front(&ilk,iki);
	printf("%s",(ilk)->content);
}
*/
int main()
{
	t_list **lst;
	t_list *a;
	t_list *b;

	lst = malloc(sizeof(t_list *));
	a = ft_lstnew("dgfdgfd");
	b = ft_lstnew("aaaaaaa");

	ft_lstadd_front(lst, b);
	ft_lstadd_front(lst, a);

	printf("%s", (*lst)->content);
	
}
