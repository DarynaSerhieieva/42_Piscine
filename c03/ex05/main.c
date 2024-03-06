#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main() {
	char dest[20] = "Hello";
	char src[] = ", world! and what will be if lenght biger?";
	unsigned int	total_length;

	total_length = ft_strlcat(dest, src, sizeof(dest));

	printf("Concatenated string: %s\n", dest);
	printf("Total length: %u\n", total_length);

	return (0);
}
