/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:35:07 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/22 18:26:58 by crmunoz-         ###   ########.fr       */
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
		write (1, "entra2\n", 7);
		aux->pos = i;
		i++;
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

void	moves(t_stack *a, t_stack *b)
{
	t_stack	*aux;

	aux = b;
	while (aux)
	{
		if (b->cost_a > 0 && b->cost_b > 0)
		{
			rr(&a, &b);
		//	b->cost_a--;
		//	b->cost_b--;
		}
		else if (b->cost_a < 0 && b->cost_b < 0)
		{
			rrr(&a, &b);
		//	b->cost_a++;
		//	b->cost_b++;
		}
		else if (b->cost_a > 0)
		{
			ra(&a, 1);
		//	b->cost_a--;
		}
		else if (b->cost_a < 0)
		{
			rra(&a, 1);
			//b->cost_a ++;
		}
		else if (b->cost_b < 0)
		{
			rrb(&b, 1);
			//b->cost_b++;
		}
		else if (b->cost_b > 0)
		{
			rb(&b, 1);
			//b->cost_b--;
		}
		aux = aux->next;
	}
}

void	big_algorit(t_stack **a, t_stack **b)
{
	while (ft_lstsize(*a) > 3)
		pb(a, b);
	sort_3(a);
	write (1, "entra\n", 6);
	position(a);
	position(b);
	set_cost_b(b);
	get_target(*a, *b);
	set_cost_a(a, b);
	set_cost_total(*b);
	//moves(*a, *b);
}
