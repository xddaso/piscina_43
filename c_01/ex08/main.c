/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelucch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:57:12 by fdelucch          #+#    #+#             */
/*   Updated: 2026/06/09 18:06:47 by fdelucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	size;
	int	*tab;
	int	numbers[] = {2, 0, 10, 3, 5};

	size = 5;
	tab = numbers;
	ft_sort_int_tab(tab, size);
	printf("%d", numbers[0]);
	printf("%d", numbers[1]);
	printf("%d", numbers[2]);
	printf("%d", numbers[3]);
	printf("%d", numbers[4]);
}
