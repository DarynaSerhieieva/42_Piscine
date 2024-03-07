#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 0;
	num2 = 1;
	num3 = 25;
	printf("Does this number prime?\n\t%d\nif prime 1 if not 0:\n\t%d\n", num1, ft_is_prime(num1));
	printf("Does this number prime?\n\t%d\nif prime 1 if not 0:\n\t%d\n", num2, ft_is_prime(num2));
	printf("Does this number prime?\n\t%d\nif prime 1 if not 0:\n\t%d\n", num3, ft_is_prime(num3));
	return (0);
}
