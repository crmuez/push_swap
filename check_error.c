/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:04:29 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/06/06 21:26:57 by crmunoz-         ###   ########.fr       */
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

void	save_number(t_stack **a, char **num)
{
	int		i;
	t_stack	*last;
	t_stack	*new;

	i = 0;
	while (num[i])
	{
		new = ft_lstnew(ft_atol(num[i]));
		if (!*a)
		{
			*a = new;
			last = new;
		}
		else
		{
			last->next = new;
			last = last->next;
		}
		i++;
	}
}
