#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	string[] = "How many characters is here?";
	char	*str;
	int	count_result;

	str = string;
	count_result = ft_strlen(str);
	printf("How many character?: %d\n", count_result);
	return (0);
}
