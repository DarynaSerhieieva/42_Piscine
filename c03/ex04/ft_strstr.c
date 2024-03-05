/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:09:36 by dserhiei          #+#    #+#             */
/*   Updated: 2024/03/05 20:34:50 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str == NULL || to_find == NULL)
		return (0);
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[j] != '\0' && str[i] == to_find[j])
		{
			i++;
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i - j);
		i = i - j + 1;
		j = 0;
	}
	return (0);
}
