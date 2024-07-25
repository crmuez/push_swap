/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:04:29 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/25 16:33:08 by crmunoz-         ###   ########.fr       */
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
		if (((str[j][i] == '-') || (str[j][i] == '+'))
			&& ((str[j][i + 1] >= '0') && (str[j][i + 1] <= '9')))
			i++;
		while (str[j][i])
		{
			if (str[j][i] < '0' || str[j][i] > '9')
				free_stack(NULL, 1);
			i++;
		}
		j++;
	}
	return (1);
}

int	check_repeat(t_stack *a, int num)
{
	while (a)
	{
		if (a->num == num)
		{
			write (2, "Error\n", 6);
			exit (1);
		}
		a = a->next;
	}
	return (1);
}

void	save_number(t_stack **a, char **num)
{
	int		i;
	t_stack	*new;
	long	n;

	i = 0;
	new = NULL;
	while (num[i])
	{
		n = ft_atol(num[i]);
		if (n > INT_MAX || n < INT_MIN)
		{
			free_stack(a, 1);
		}
		if (check_repeat(*a, n) == 0)
			free_stack(a, 1);
		new = ft_lstnew(n);
		new->index = -1;
		ft_lstadd_back(a, new);
		i++;
	}
	if (*a && (*a)->next == NULL)
		free_stack(a, 0);
}
