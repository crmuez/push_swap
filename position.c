/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:35:07 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/24 16:50:47 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	position(t_stack **n)
{
	t_stack	*aux;
	int		i;

	aux = *n;
	i = 0;
	while (aux)
	{
		aux->pos = i;
		i++;
		aux = aux->next;
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
		aux->cost_a = aux->target;
		if (aux->cost_a > med)
			aux->cost_a = aux->target - ft_lstsize(*a);
		aux = aux->next;
	}
}

void	set_cost_b(t_stack **n)
{
	int		med;
	int		i;
	t_stack	*aux;

	med = (ft_lstsize(*n)) / 2;
	i = 0;
	aux = *n;
	while (aux)
	{
		if ((i <= med))
			aux->cost_b = i;
		if (i > med)
			aux->cost_b = i - ft_lstsize(*n);
		aux = aux->next;
		i++;
	}
}

void	moves(t_stack **a, t_stack **b, t_stack *nodo_min)
{
	while (nodo_min->cost_a != 0 || nodo_min->cost_b != 0)
	{
		if (nodo_min->cost_a > 0 && nodo_min->cost_b > 0)
		{
			rr(a, b);
			nodo_min->cost_a--;
			nodo_min->cost_b--;
		}
		else if (nodo_min->cost_a < 0 && nodo_min->cost_b < 0)
		{
			rrr(a, b);
			nodo_min->cost_a++;
			nodo_min->cost_b++;
		}
		else if (nodo_min->cost_a > 0)
		{
			ra(a, 1);
			nodo_min->cost_a--;
		}
		else if (nodo_min->cost_a < 0)
		{
			rra(a, 1);
			nodo_min->cost_a++;
		}
		else if (nodo_min->cost_b < 0)
		{
			rrb(b, 1);
			nodo_min->cost_b++;
		}
		else if (nodo_min->cost_b > 0)
		{
			rb(b, 1);
			nodo_min->cost_b--;
		}
	}
	if (nodo_min->cost_a == 0 && nodo_min->cost_b == 0)
		pa(a, b);
}
