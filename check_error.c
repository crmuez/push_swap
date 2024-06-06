/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:04:29 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/06/04 19:10:22 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_numbers(char **str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[j])
	{
		i = 0;
		if (str[j][i] == '-')
			i++;
		while (str[j][i])
		{	
			if (str[j][i] < '0' || str[j][i] > '9')
			{
				write (1, "Error\n", 6);
				return (0);
			}
			i++;
		}
		j++;
	}
	return (1);
}
