#include <stdio.h>

int	ft_fibonacci(int nb);

int	main(void)
{
	int	numb1;
	int	numb2;
	int	numb3;

	numb1 = 0;
	numb2 = 5;
	numb3 = 30;
	printf("This is index:\n\t%u\nThis is fibonacci number:\n\t%d\n", numb1, ft_fibonacci(numb1));
	printf("This is index:\n\t%u\nThis is fibonacci number:\n\t%d\n", numb2, ft_fibonacci(numb2));
	printf("This is index:\n\t%u\nThis is fibonacci number:\n\t%d\n", numb3, ft_fibonacci(numb3));
	return (0);
}
