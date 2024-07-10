/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:12:42 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/09 18:29:10 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*aux;

	if (*b)
	{
		aux = (*b)->next;
		(*b)->next = *a;
		*a = *b;
		*b = aux;
		write (1, "pa\n", 3);
	}
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*aux;

	if (*a)
	{
		aux = (*a)->next;
		(*a)->next = *b;
		*b = *a;
		*a = aux;
		write (1, "pb\n", 3);
	}
}
