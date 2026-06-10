/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelucch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 22:29:28 by fdelucch          #+#    #+#             */
/*   Updated: 2026/06/08 23:09:14 by fdelucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	*div;
	int	*mod;
	int	res_mod;
	int	res_div;

	res_div = 1;
	res_mod = 2;
	div = &res_div;
	mod = &res_mod;
	ft_div_mod(res_div, res_mod, div, mod);
	printf("div: %d, mod: %d", *div, *mod);
}
