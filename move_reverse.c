/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_reverse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:39:45 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/10 16:59:41 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **a, int print)
{
	t_stack	*last;
	t_stack	*aux;

	if (*a && (*a)->next)
	{
		aux = *a;
		last = ft_lstlast(*a);
		while (aux && aux->next && aux->next->next)
			aux = aux->next;
		aux->next = NULL;
		ft_lstadd_front(a, last);
		if (print == 1)
			write(1, "rra\n", 4);
	}
}

void	rrb(t_stack **b, int print)
{
	t_stack	*last;
	t_stack	*aux;

	if (*b && (*b)->next)
	{
		aux = *b;
		last = ft_lstlast(*b);
		while (aux && aux->next && aux->next->next)
			aux = aux->next;
		aux->next = NULL;
		ft_lstadd_front(b, last);
		if (print == 1)
			write(1, "rrb\n", 4);
	}
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a, 0);
	rrb(b, 0);
	write(1, "rrr\n", 4);
}
