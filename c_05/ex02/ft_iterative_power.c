/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelucch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 18:36:21 by fdelucch          #+#    #+#             */
/*   Updated: 2026/06/22 19:14:45 by fdelucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;
	
	if (power < 0)
		return (0);
	else if (power == 0 || nb == 1)
		return (1);
	else
	{
		res = nb;
		while (power > 1)
		{
			res *= nb;
			power--;
		}
	}
	return (res);
}

int	main(void)
{
	int	res;
	
	res = ft_iterative_power(3, 7);
	printf("%d\n", res);
	res = ft_iterative_power(1, 7);
	printf("%d\n", res);
	res = ft_iterative_power(23213, 0);
	printf("%d\n", res);
	res = ft_iterative_power(4, 10);
	printf("%d\n", res);

}
