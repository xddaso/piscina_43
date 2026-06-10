/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelucch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 09:34:26 by fdelucch          #+#    #+#             */
/*   Updated: 2026/06/09 10:37:09 by fdelucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	num;
	int	num2;
	int	*a;
	int	*b;

	num = 1;
	num2 = 94;
	a = &num;
	b = &num2;
	ft_ultimate_div_mod(a, b);
	printf("a: %d, b: %d", *a, *b);
}
