/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:23:01 by faydin            #+#    #+#             */
/*   Updated: 2022/02/20 16:37:49 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	aux = ft_lstlast(*lst);
	aux->next = new;
}
/*
#include <stdio.h>
int	main()
{
	t_list *ilk;
	t_list *iki;
	char dizi[] = "ilk kontent";
	char dizi2[] = "ikinci kontent";
	ilk = ft_lstnew(dizi);
	iki = ft_lstnew(dizi2);

	ft_lstadd_back(&ilk,iki);
	printf("%s", (ilk)->next->content);
}*/
