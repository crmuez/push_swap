/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:35:07 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/17 20:55:05 by crmunoz-         ###   ########.fr       */
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
		aux->pos = i;
		i++;
		aux = aux->next;
	}
}

void	big_algorit(t_stack **a, t_stack **b)
{
	while (ft_lstsize(*a) > 3)
		pb(a, b);
	sort_3(a);
	position(a);
	position(b);
}
