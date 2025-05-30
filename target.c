/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:59:24 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/25 16:13:13 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_target(t_stack *a, t_stack *b)
{
	int		min;
	int		pos_min;
	t_stack	*aux;

	aux = a;
	while (b)
	{
		pos_min = 0;
		a = aux;
		min = INT_MAX;
		while (a)
		{
			if ((a->num > b->num) && (min > a->num))
			{
				min = a->num;
				pos_min = a->pos;
			}
			if (min == INT_MAX)
				pos_min = get_pos_min(aux);
			a = a->next;
		}
		b->target = pos_min;
		b = b->next;
	}
}

void	set_cost_total(t_stack *b)
{
	while (b)
	{
		if ((b->cost_a >= 0) && (b->cost_b >= 0))
		{
			if (b->cost_a > b->cost_b)
				b->cost_total = b->cost_a;
			else
				b->cost_total = b->cost_b;
		}
		if ((b->cost_a < 0) && (b->cost_b < 0))
		{
			if ((b->cost_a * -1) > (b->cost_b * -1))
				b->cost_total = ft_abs(b->cost_a);
			else
				b->cost_total = ft_abs(b->cost_b);
		}
		if (((b->cost_a >= 0) && (b->cost_b < 0))
			|| ((b->cost_a < 0) && (b->cost_b >= 0)))
			b->cost_total = (ft_abs(b->cost_b) + ft_abs(b->cost_a));
		b = b->next;
	}
}

t_stack	*get_min_ct(t_stack **b)
{
	t_stack	*aux;
	t_stack	*nodo_min;
	int		ct_min;

	aux = *b;
	ct_min = INT_MAX;
	nodo_min = NULL;
	while (aux)
	{
		if (aux->cost_total < ct_min)
		{
			ct_min = aux->cost_total;
			nodo_min = aux;
		}
		aux = aux->next;
	}
	return (nodo_min);
}
