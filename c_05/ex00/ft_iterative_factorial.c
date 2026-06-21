#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1)
	{
		res = 1;
		while (nb
		{
			res = res * nb;
			nb--;
		}
		return (res);
	}
	else
		return (0); 
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(-1));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(12));
}
*/
