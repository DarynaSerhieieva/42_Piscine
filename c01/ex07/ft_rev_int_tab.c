/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:41:43 by dserhiei          #+#    #+#             */
/*   Updated: 2024/02/28 18:45:29 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	p;
	int	clone;

	i = 0;
	p = size - 1;
	while (i < size / 2)
	{
		clone = tab[i];
		tab[i] = tab[p];
		tab[p] = clone;
		i++;
		p--;
	}
}
