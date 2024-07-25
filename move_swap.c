/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:12:42 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/25 10:56:54 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a, int print)
{
	int	aux;

	if (*a && (*a)->next)
	{
		aux = (*a)->num;
		(*a)->num = (*a)->next->num;
		(*a)->next->num = aux;
		if (print == 1)
			write(1, "sa\n", 3);
	}
}

void	sb(t_stack **b, int print)
{
	int	aux;

	if (*b && (*b)->next)
	{
		aux = (*b)->num;
		(*b)->num = (*b)->next->num;
		(*b)->next->num = aux;
		if (print == 1)
			write(1, "sb\n", 3);
	}
}

void	ss(t_stack **a, t_stack **b)
{
	sa(a, 0);
	sb(b, 0);
	write(1, "ss\n", 3);
}
