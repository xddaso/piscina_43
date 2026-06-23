/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelucch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 00:27:27 by fdelucch          #+#    #+#             */
/*   Updated: 2026/06/23 01:04:27 by fdelucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0 || nb == 1)
		return (1);
	else
		if (power > 1)
			return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}
/*
int     main(void)
{
        int     res;

        res = ft_recursive_power(3, 7);
        printf("%d\n", res);
        res = ft_recursive_power(1, 7);
        printf("%d\n", res);
        res = ft_recursive_power(23213, 0);
        printf("%d\n", res);
        res = ft_recursive_power(4, 10);
        printf("%d\n", res);
        res = ft_recursive_power(0, 10);
        printf("%d\n", res);
        res = ft_recursive_power(1, 1);
        printf("%d\n", res);
}
*/
