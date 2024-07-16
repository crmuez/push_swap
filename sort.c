/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:08:11 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/16 21:51:29 by crmunoz-         ###   ########.fr       */
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

void	sort_4(t_stack **a, t_stack **b)
{
	t_stack	*aux;

	aux = *a;
	if ((aux->num > aux->next->num) && (aux->num > aux->next->next->num)
		&& (aux->num > aux->next->next->next->num))
	{
		pb(a, b);
		sort_3(a);
		pa(a, b);
		ra(a, 1);
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
}

void	short_sort(t_stack **a, t_stack **b)
{
	t_stack	*aux;

	aux = *a;
	if (ft_lstsize(*a) == 2)
		sa(a, 1);
	else if (ft_lstsize(*a) == 3)
		sort_3(a);
	else if (ft_lstsize(*a) == 4)
		sort_4(a, b);
}
