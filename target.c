/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:59:24 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/19 17:46:59 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_target(t_stack *a, t_stack *b)
{
	int		min;
	int		pos_min;
	t_stack	*aux;

	aux = a;
	while (b)
	{
		pos_min = 0;
		a = aux;
		min = INT_MAX;
		while (a)
		{
			if ((a->num > b->num) && (min > a->num))
			{
				min = a->num;
				pos_min = a->pos;
			}
			if (min == INT_MAX && (a->next == NULL))
				b->target = a->pos;
			a = a->next;
		}
		b->target = pos_min;
		b = b->next;
	}
}
