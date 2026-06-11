#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	end;

	i = 0;
	while (i < n)
	{
		if (src[i] == '\0')
			end = 1;
		if (end != 1)
		{
			dest[i] = src[i];
			i++;
		}
		else
		{
			dest[i] = '\0';
			i++;
		}
	}
}

int	main(void)
{
	char	src[20] = "holaasdqwe";
	char	dest[10] = "difgdkeasq";
	int	n = 10;
	
	ft_strncpy(dest, src, n);
	printf("src: %s\ndest: %s", src, dest);
}
