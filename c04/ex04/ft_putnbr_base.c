/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:37:43 by dserhiei          #+#    #+#             */
/*   Updated: 2024/03/06 19:35:57 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

int	valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (-1);
		j = 0;
		while (base[j] != '\0' && j != i)
		{
			if (base[i] == base[j])
				return (-1);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (-1);
	return (i);
}

void	ft_putnbr(int nb, char *base, int size)
{
	if (nb == -2147483648)
	{
		print_char('-');
		print_char(base[2]);
		nb = 147483648;
	}
	if (nb < 0)
	{
		print_char('-');
		nb *= -1;
	}
	if (nb >= size)
	{
		ft_putnbr(nb / size, base, size);
		ft_putnbr(nb % size, base, size);
	}
	else
	{
		print_char(base[nb]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = valid_base(base);
	if (!i)
		return ;
	ft_putnbr(nbr, base, i);
}
