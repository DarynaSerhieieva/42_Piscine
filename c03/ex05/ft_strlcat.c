/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:27:16 by dserhiei          #+#    #+#             */
/*   Updated: 2024/03/06 13:52:52 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (dest[count] != '\0')
		count++;
	while (src[i] != '\0' && count < size - 1)
	{
		dest[count] = src[i];
		i++;
		count++;
	}
	dest[count] = '\0';
	return (count);
}
