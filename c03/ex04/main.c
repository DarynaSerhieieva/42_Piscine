#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str1[] = "Hello, waoaralada!";
	char	str2[] = "world";
	char	*result;

	result = ft_strstr(str1, str2);
	if (result)
	{
		printf("Substring found at position: %ld\n", result - str1);
	}
	else
	{
		printf("Substring not found\n");
	}
	return (0);
}
