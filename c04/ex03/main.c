#include <stdio.h>

int	ft_atoi(char *str);

int	main(int argc, char *argv[]) {
	if (argc < 2)
		printf("Usage: %s <argument>\n", argv[0]);

	char *argument = argv[1];
	int number;

	printf("Argument entered: %s\n", argument);
	number = ft_atoi(argument);
	printf("Argument entered: %d\n", number);
	return (0);
}
