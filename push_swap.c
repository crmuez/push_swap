/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:56:18 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/15 21:10:32 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**num;

	a = NULL;
	b = NULL;
	num = NULL;
	if ((argc == 2 && !argv[1][0]) || argc < 2)
		write(2, "Error\n", 6);
	else if (argc == 2)
		num = ft_split(argv[1], ' ');
	else
		num = argv + 1;
	check_numbers(num);
	save_number(&a, num);
	set_index(&a);
	if (order_check(&a) == 1)
		write(1, "desordenado", 11);
	else if (order_check(&a) == 0)
		write(1, "ordenado", 8);
}
/*	

	while (b)
	{
		printf("B: %d\n", b->num);
		b = b->next;
	while (a)
	{
		printf("A: %d\n", a->index);
		a = a->next;
	}
	}*/