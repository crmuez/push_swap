/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:03:00 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/24 18:15:25 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **s, int error)
{
	t_stack	*node;
	t_stack	*tmp;

	if (s == NULL)
		return ;
	node = *s;
	while (node)
	{
		tmp = node->next;
		free(node);
		node = tmp;
	}
	*s = NULL;
	if (error == 1)
	{
		write (1, "Error\n", 6);
		exit (1);
	}
}
