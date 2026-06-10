/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelucch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:57:12 by fdelucch          #+#    #+#             */
/*   Updated: 2026/06/10 12:44:29 by fdelucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	size;
	int	*tab;
	int	numbers[] = {1, 2, 3, 4, 5, 6};

	size = 6;
	tab = numbers;
	ft_rev_int_tab(tab, size);
	printf("%d", numbers[0]);
	printf("%d", numbers[1]);
	printf("%d", numbers[2]);
	printf("%d", numbers[3]);
	printf("%d", numbers[4]);
	printf("%d", numbers[5]);
}
