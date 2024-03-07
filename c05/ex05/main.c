#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 34;
	num2 = 121;
	num3 = 25;
	printf("The square root of a number:\n\t%d\nIs:\n\t%d\n", num1, ft_sqrt(num1));
	printf("The square root of a number:\n\t%d\nIs:\n\t%d\n", num2, ft_sqrt(num2));
	printf("The square root of a number:\n\t%d\nIs:\n\t%d\n", num3, ft_sqrt(num3));
	return (0);
}
