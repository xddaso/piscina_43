#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	int	len;
	int	i;

	len = ft_strlen(str);
	i = 0;
	while (i != len)
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "holasd";
	ft_putstr(str);
}
*/
