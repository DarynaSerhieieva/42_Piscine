#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	source[50] = "help you?";
	char destination[50] = "Hello, how can I";

	printf("\nValue returned by strcat is: %s", ft_strcat(destination, source));
	return (0);
}
