/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:56:18 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/25 16:53:49 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_num_order(t_stack **a, t_stack **b)
{
	set_index(a);
	if (order_check(a) == 1)
		sort(a, b);
	free_stack(a, 0);
	free_stack(b, 0);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**num;
	int		flag;

	a = NULL;
	b = NULL;
	num = NULL;
	flag = 0;
	if (argc == 1)
		exit (0);
	if ((argc == 2 && !argv[1][0]) || argc < 2)
		free_stack(NULL, 1);
	else if (argc == 2)
	{
		num = ft_split(argv[1], ' ');
		flag = 1;
	}
	else
		num = argv + 1;
	check_numbers(num);
	save_number(&a, num);
	if (flag)
		free_num(num);
	set_num_order(&a, &b);
}

	/*
	while (a)
	{
		printf("A: %d\n", a->num);
		a = a->next;
	}
	while (b)
	{
		printf("B: %d\n", b->num);
		b = b->next;
	}
	*/