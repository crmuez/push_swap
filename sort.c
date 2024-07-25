/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:08:11 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/25 10:38:28 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack **a)
{
	if (((*a)->num > (*a)->next->num) && (*a)->num > (*a)->next->next->num)
		ra(a, 1);
	else if (((*a)->num < (*a)->next->num)
		&& ((*a)->next->num > (*a)->next->next->num))
		rra(a, 1);
	if ((*a)->num > (*a)->next->num)
		sa(a, 1);
}

void	final_moves(t_stack **a)
{
	int	min;

	min = get_num_min(*a);
	while ((*a)->num != min)
		ra(a, 1);
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
		moves(a, b, aux);
	}
	final_moves(a);
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