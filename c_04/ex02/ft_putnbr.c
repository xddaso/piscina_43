#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;
	int		do_nothing;

	do_nothing = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		do_nothing = 1;
	}
	if (nb < 0 && do_nothing != 1)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb < 10 && do_nothing != 1)
		c = nb + '0';
		write()
}
int	main(void)
{
	ft_putnbr(42);
	ft_putnbr(0);
	ft_putnbr(-42);
	ft_putnbr(-2147483648);
	ft_putnbr(2147483647);
	return (0);
}
