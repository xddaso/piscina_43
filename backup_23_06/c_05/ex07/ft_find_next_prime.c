/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelucch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 20:03:25 by fdelucch          #+#    #+#             */
/*   Updated: 2026/06/23 20:18:53 by fdelucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	if (nb <= 1)
		return (2);
	else if (ft_is_prime(nb) == 1)
		return (nb);
	else if (ft_is_prime(nb) == 0)
	{
		while (ft_is_prime(nb + i) != 1)
			i++;
		nb += i;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(-131));
	printf("%d\n", ft_find_next_prime(16));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(7));
	printf("%d\n", ft_find_next_prime(149));
	printf("%d\n", ft_find_next_prime(997));
}
*/
