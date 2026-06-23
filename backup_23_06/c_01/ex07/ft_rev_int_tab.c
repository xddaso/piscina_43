/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelucch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:03:19 by fdelucch          #+#    #+#             */
/*   Updated: 2026/06/09 17:04:40 by fdelucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	last;
	int	index;
	int	temp;

	index = 0;
	size--;
	while (index < (size / 2))
	{
		temp = tab[index];
		last = tab[(size - index)];
		tab[index] = last;
		tab[(size - index)] = temp;
		index++;
	}
}
