/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:26:42 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/23 15:01:51 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a, int print)
{
	t_stack	*aux;

	if (*a || (*a)->next)
	{
		aux = *a;
		*a = (*a)->next;
		aux->next = NULL;
		ft_lstadd_back(a, aux);
		if (print == 1)
			write(1, "ra\n", 3);
	}
}

void	rb(t_stack **b, int print)
{
	t_stack	*aux;

	if (*b || (*b)->next)
	{
		aux = *b;
		*b = (*b)->next;
		aux->next = NULL;
		ft_lstadd_back(b, aux);
		if (print == 1)
			write(1, "rb\n", 3);
	}
}

void	rr(t_stack **a, t_stack **b)
{
	ra(a, 0);
	rb(b, 0);
	write(1, "rr\n", 3);
}
