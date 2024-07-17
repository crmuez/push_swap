/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:59:34 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/17 16:16:52 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_index2(t_stack **a)
{
	t_stack	*aux;
	t_stack	*small;
	int		max_index;

	max_index = 0;
	small = NULL;
	aux = *a;
	if (*a && (*a)->next)
	{
		while (aux)
		{
			if (aux->index == -1)
			{
				if (!small)
					small = aux;
				if (small && small->num > aux->num)
					small = aux;
			}
			else
				if (aux->index > max_index)
					max_index = aux->index;
			aux = aux->next;
		}
		small->index = max_index + 1;
	}
}

void	set_index(t_stack **a)
{
	t_stack	*aux;

	aux = *a;
	while (aux)
	{
		set_index2(a);
		aux = aux->next;
	}
}

int	order_check(t_stack **a)
{
	t_stack	*aux;
	int		i;

	i = 1;
	aux = *a;
	while (aux)
	{
		if (aux->index == i)
		{
			aux = aux->next;
			i++;
		}
		else
		{
			return (1);
		}
	}
	return (0);
}
