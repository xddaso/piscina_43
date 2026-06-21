#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	res = 1;
	while (nb > 1)
		res = res * nb--;
	return (res);
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
