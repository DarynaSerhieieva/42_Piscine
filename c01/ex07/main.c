#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	rev_number(int	*tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int	numbers[5] = {1, 5, 9, 4, 3};
	int	num_len;
	int	*p_numbers;

	num_len = 5;
	p_numbers = numbers;
	rev_number(p_numbers, num_len);
	ft_rev_int_tab(p_numbers, num_len);
	rev_number(p_numbers, num_len);
	return (0);
}
