/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:12:42 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/25 16:20:08 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*aux;
	t_stack	*extra;

	aux = NULL;
	if (*b)
	{
		aux = ft_lstnew((*b)->num);
		extra = (*b)->next;
		free(*b);
		*b = extra;
		ft_lstadd_front(a, aux);
		write (1, "pa\n", 3);
	}
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*aux;
	t_stack	*extra;

	aux = NULL;
	if (*a)
	{
		aux = ft_lstnew((*a)->num);
		extra = (*a)->next;
		free(*a);
		*a = extra;
		ft_lstadd_front(b, aux);
		write (1, "pb\n", 3);
	}
}
