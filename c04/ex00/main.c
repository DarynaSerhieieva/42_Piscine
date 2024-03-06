#include <stdio.h>

int	ft_strlen(char *str);

int	main() {
	char src[] = "Hell, world! I want to know how many characters are here.";
	
	ft_strlen(src);

	printf("Lenght of string is: %d\n", ft_strlen(src));

	return (0);
}
