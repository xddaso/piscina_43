/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelucch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 13:57:14 by fdelucch          #+#    #+#             */
/*   Updated: 2026/06/23 20:01:12 by fdelucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	res;

	res = 1;
	if (nb <= 0)
		return (0);
	while (res * res <= nb)
	{
		res++;
	}
	res -= 1;
	if (res * res == nb)
		return (res);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(-16));
	printf("%d\n", ft_sqrt(100));
	printf("%d\n", ft_sqrt(32));
}
*/
