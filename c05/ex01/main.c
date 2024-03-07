#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	numb1;
	int	numb2;
	int	numb3;

	numb1 = 0;
	numb2 = 5;
	numb3 = 30;
	printf("This is befor:\n\t%u\nThis is factorial:\n\t%d\n", numb1, ft_recursive_factorial(numb1));
	printf("This is befor:\n\t%u\nThis is factorial:\n\t%d\n", numb2, ft_recursive_factorial(numb2));
	printf("This is befor:\n\t%u\nThis is factorial:\n\t%d\n", numb3, ft_recursive_factorial(numb3));
	return (0);
}
