/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:05:55 by dserhiei          #+#    #+#             */
/*   Updated: 2024/03/07 14:43:10 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (nb > 0)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}
