#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb > 1)
	{
		res = nb * (nb - 1);
		nb--;
		ft_recursive_factorial(nb);
	}
	return (res);
}
int	main(void)
{
        printf("%d\n", ft_recursive_factorial(5));
        printf("%d\n", ft_recursive_factorial(-1));
        printf("%d\n", ft_recursive_factorial(0));
        printf("%d\n", ft_recursive_factorial(1));
        printf("%d\n", ft_recursive_factorial(12));
}
