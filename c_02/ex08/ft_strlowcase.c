#include <unistd.h>

char	*ft_strflowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	*str;
	char	*pointer;
	int	i;

	str = "aASDA  __ 1";
	pointer = ft_strlowcase(str);
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
