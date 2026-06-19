/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelucch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 19:56:07 by fdelucch          #+#    #+#             */
/*   Updated: 2026/06/19 19:59:49 by fdelucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb < 10)
		c = nb + '0';
	else
	{
		ft_putnbr((nb / 10));
		c = (nb % 10) + '0';
	}
	write(1, &c, 1);
}
/*int	main(void)
{
	ft_putnbr(42);
	ft_putnbr(1);
	ft_putnbr(0);
	ft_putnbr(-42);
	ft_putnbr(-2147483648);
	ft_putnbr(2147483647);
	return (0);
}
*/
