/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:56:18 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/23 19:39:08 by crmunoz-         ###   ########.fr       */
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
	{
		short_sort(&a);
		big_algorit(&a, &b);
	}
	else
		return (0);
	while (a)
	{
		printf("A: %d target: %d pos:%d\n", a->num, a->target, a->pos);
		a = a->next;
	}
}
/*	

	while (b)
	{
		printf("B: %d target: %d ca: %d cb: %d ct: %d\n", b->num, b->target, b->cost_a,b->cost_b, b->cost_total);
		b = b->next;
	}
	while (b)
	{
		printf("B: %d\n", b->num);
		b = b->next;
	}*/