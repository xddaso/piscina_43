/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelucch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 18:05:19 by fdelucch          #+#    #+#             */
/*   Updated: 2026/06/10 09:42:46 by fdelucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	current;
	int	smaller;
	int	tmp;

	current = 0;
	while (current < size - 1)
	{
		smaller = current + 1;
		while (smaller < size)
		{
			if (tab[current] > tab[smaller])
			{
				tmp = tab[current];
				tab[current] = tab[smaller];
				tab[smaller] = tmp;
			}
			smaller++;
		}
		current++;
	}
}
