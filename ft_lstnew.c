/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 23:39:20 by faydin            #+#    #+#             */
/*   Updated: 2022/02/20 16:27:13 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new -> content = content;
	new->next = NULL;
	return (new);
}
/*
#include <stdio.h>
int	main()
{
	t_list *ilkeleman;
	t_list *a;
	t_list *b;
	t_list *c;
	char	ilk[] = "1";
   
	a	= malloc(sizeof(t_list *));
	a->content = "asddd";
	ilkeleman = ft_lstnew(ilk);
	b = ft_lstnew("abc");
	c = ft_lstnew(ft_strdup("123"));

	ilkeleman->next = a;
	a->next = b;
	b->next = c;

	printf("%s\n", (ilkeleman)->content);
	printf("%s\n%s", ilkeleman->next->content, ilkeleman->next->next->content);
}*/
