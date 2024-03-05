#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	source[50] = "help you?";
	char destination[50] = "Hello, how can I";
	unsigned int	num;

	num = 5;
	printf("\nValue returned by strncat is: %s", ft_strncat(destination, source, num));
	return (0);
}
