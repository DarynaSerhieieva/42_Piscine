/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:26:06 by dserhiei          #+#    #+#             */
/*   Updated: 2024/03/06 17:25:14 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	status;

	i = 0;
	status = 1;
	result = 0;
	while (str[i] == 32 || str[i] >= 9 && str[i] <= 13)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			status *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * status);
}
