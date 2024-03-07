#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	numb1;
	int	numb2;
	int	numb3;
    int power1;
    int power2;
    int power3;

	numb1 = 0;
	numb2 = 5;
	numb3 = 30;
    power1 = 1;
    power2 = 4;
    power3 = 3;
	printf("This is befor number:\n\t%u\nand powder:\n\t%u\nThis is new number:\n\t%d\n", numb1, power1, ft_recursive_power(numb1, power1));
	printf("This is befor number:\n\t%u\nand powder:\n\t%u\nThis is new number:\n\t%d\n", numb2, power2, ft_recursive_power(numb2, power2));
	printf("This is befor number:\n\t%u\nand powder:\n\t%u\nThis is new number:\n\t%d\n", numb3, power3, ft_recursive_power(numb3, power3));
	return (0);
}
