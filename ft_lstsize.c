/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:54:08 by faydin            #+#    #+#             */
/*   Updated: 2022/02/20 16:43:24 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst -> next;
		count++;
	}
	return (count);
}
/*
#include <stdio.h>
int main()
{
    t_list *ilk;
    char dizi[] = "ilk content";
    t_list *iki;
    char dizi2[] = "ikinci content";
    ilk = ft_lstnew(dizi);
	iki = ft_lstnew(dizi2);
	ft_lstadd_back(&ilk,iki);
    printf("%i",ft_lstsize(ilk));
}*/
