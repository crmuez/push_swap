/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:18:14 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/06/04 17:09:12 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_lstnew(int	number)
{
	t_stack	*nodo;

	nodo = malloc(sizeof(t_stack) * 1);
	if (nodo == NULL)
		return (NULL);
	nodo -> num = number;
	nodo -> next = NULL;
	return (nodo);
}
