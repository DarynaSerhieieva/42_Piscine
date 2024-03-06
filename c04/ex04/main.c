#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int	main() {

	int	number1 = -2147483648;
	int	number2 = -567;
	int	number3 = 0;
	char	base1[] = "0123456789";
	char	base2[] = "01";
	char	base3[] = "poneyvif";
	char	base4[] = "0123456789ABCDEF";

	printf("Number:\n\t %d \nin base:\n\t \"%s\": ", number1, base1);
	printf("\n");
	ft_putnbr_base(number1, base1);
	printf("\n");

	printf("Number:\n\t %d \nin base:\n\t \"%s\": ", number2, base2);
	printf("\n");
	ft_putnbr_base(number2, base2);
	printf("\n");

	printf("Number:\n\t %d \nin base:\n\t \"%s\": ", number3, base3);
	printf("\n");
	ft_putnbr_base(number3, base3);
	printf("\n");

	printf("Number:\n\t %d \nin base:\n\t \"%s\": ", number1, base4);
	printf("\n");
	ft_putnbr_base(number1, base4);
	printf("\n");

	return (0);
}
