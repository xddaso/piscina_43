#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		while ((src[i] != '\0') && (i < (n-1)))
		{
			dest[i] = src[i];
                        i++;
		}
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	src[20] = "holaasdqwe";
	char	dest[10];
	unsigned int	n = 10;
	char	*res;

	res = ft_strncpy(dest, src, n);
	printf(res);
	//printf("src: %s\ndest: %s", src, dest);
}
