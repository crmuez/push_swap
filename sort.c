/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:08:11 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/24 17:47:02 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack **a)
{
	t_stack	*aux;

	aux = *a;
	if ((aux->num > aux->next->num) && aux->num > aux->next->next->num)
		ra(a, 1);
	else if ((aux->num < aux->next->num) && aux->num < aux->next->next->num)
		rra(a, 1);
	if (order_check(a) == 1)
		sa(a, 1);
}

void	final_moves(t_stack *a)
{
	int	min;

	min = get_num_min(a);
	while (a->num != min)
		ra(&a, 1);
}

void	big_algorit(t_stack **a, t_stack **b)
{
	t_stack	*aux;

	while (ft_lstsize(*a) > 3)
		pb(a, b);
	sort_3(a);
	while (*b)
	{
		position(a);
		position(b);
		get_target(*a, *b);
		set_cost_b(b);
		set_cost_a(a, b);
		set_cost_total(*b);
		aux = get_min_ct(b);
	/*	t_stack	*aux_a;
		t_stack	*aux_b;
		aux_a = *a;
		aux_b = *b;
		while (aux_a)
		{
			printf("A: %d\n", aux_a->num);
			aux_a = aux_a->next;
		}
		while (aux_b)
		{
			printf("B: %d, Target:%d, CA: %d, CB: %d, ct: %d\n", (aux_b)->num, aux_b->target, aux_b->cost_a, aux_b->cost_b, (aux_b)->cost_total);
			aux_b = (aux_b)->next;
		}*/
		moves(a, b, aux);
	}
	final_moves(*a);
}

void	sort(t_stack **a, t_stack **b)
{
	if (ft_lstsize(*a) == 2)
		sa(a, 1);
	else if (ft_lstsize(*a) == 3)
		sort_3(a);
	else
		big_algorit(a, b);
}

/*
	
*/

/*void	sort_4(t_stack **a, t_stack **b)
{
	t_stack	*aux;

	aux = *a;
	if ((aux->num > aux->next->num) && (aux->num > aux->next->next->num)
		&& (aux->num > aux->next->next->next->num))
	{
		if (aux->next->num < aux->next->next->num
			&& aux->next->num < aux->next->next->next->num
			&& aux->next->next->num < aux->next->next->next->num)
			ra(a, 1);
		else
		{
			pb(a, b);
			sort_3(a);
			pa(a, b);
			ra(a, 1);
		}
	}
	else if ((aux->num < aux->next->num)
		&& (aux->num < aux->next->next->num)
		&& (aux->num < aux->next->next->next->num))
	{
		pb(a, b);
		sort_3(a);
		pa(a, b);
	}
	else
	{
		ra(a, 1);
		sort_4(a, b);
	}
}*/