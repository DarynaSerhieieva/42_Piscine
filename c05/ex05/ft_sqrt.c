/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:06:26 by dserhiei          #+#    #+#             */
/*   Updated: 2024/03/07 18:26:12 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sq_root;

	sq_root = 1;
	if (nb > 0)
	{
		while ((sq_root * sq_root) <= nb)
		{
			if ((sq_root * sq_root) == nb)
				return (sq_root);
			if (sq_root > 46340)
				return (0);
			sq_root++;
		}
	}
	return (0);
}
