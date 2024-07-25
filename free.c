/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:03:00 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/25 15:55:41 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **s, int error)
{
	t_stack	*node;
	t_stack	*tmp;

	tmp = NULL;
	node = NULL;
	if (s)
		node = *s;
	while (node)
	{
		tmp = node->next;
		free(node);
		node = tmp;
	}
	if (s)
		*s = NULL;
	if (error == 1)
	{
		write (2, "Error\n", 6);
		exit (1);
	}
}

void	free_num(char **num)
{
	int	j;

	j = 0;
	if (num)
	{
		while (num[j])
		{
			free(num[j]);
			j++;
		}
		free(num);
	}
}
