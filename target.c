/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:59:24 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/19 19:24:32 by crmunoz-         ###   ########.fr       */
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
			if (min == INT_MAX && (a->next == NULL))
				b->target = a->pos;
			a = a->next;
		}
		b->target = pos_min;
		b = b->next;
	}
}

void	set_cost_a(t_stack **a, t_stack **b)
{
	int		med;
	t_stack	*aux;

	med = (ft_lstsize(*a)) / 2;
	aux = *b;
	while (aux)
	{
		if ((aux->pos <= med))
			aux->cost_a = aux->target;
		if (aux->pos > med)
			aux->cost_a = aux->target - ft_lstsize(*a);
		aux = aux->next;
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
				b->cost_total = b->cost_a * -1;
			else
				b->cost_total = b->cost_b * -1;
		}
		if ((b->cost_a >= 0) && (b->cost_b < 0))
			b->cost_total = ((b->cost_b * -1) + (b->cost_a));
		if ((b->cost_a < 0) && (b->cost_b >= 0))
			b->cost_b = ((b->cost_a * -1) + b->cost_b);
		b = b->next;
	}
}
