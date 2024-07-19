/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:35:07 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/19 14:27:21 by crmunoz-         ###   ########.fr       */
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

void	set_cost(t_stack **n)
{
	int		med;
	int		i;
	t_stack	*aux;

	med = (ft_lstsize(*n)) / 2;
	i = 0;
	aux = *n;
	while (aux)
	{
		if ((i <= med))
			aux->cost = i;
		if (i > med)
			aux->cost = i - ft_lstsize(*n);
		aux = aux->next;
		i++;
	}
}

void	big_algorit(t_stack **a, t_stack **b)
{
	while (ft_lstsize(*a) > 3)
		pb(a, b);
	sort_3(a);
	position(a);
	position(b);
	set_cost(a);
	set_cost(b);
	get_target(*a, *b);
}
