/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:29:23 by faydin            #+#    #+#             */
/*   Updated: 2022/02/18 20:30:12 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
	{
		return ;
	}
	i = 0;
	while (s[i])
	{	
		f(i, s + i);
		i++;
	}
}

void	f(unsigned int i, char *dizi)
{
	*dizi = 'a';
}
#include <stdio.h>

int	main()
{
	char	dizi[] = "omeryigit";
	ft_striteri(dizi, f);
	printf("%s", dizi);
}
