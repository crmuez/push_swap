/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:56:18 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/06/18 18:40:19 by crmunoz-         ###   ########.fr       */
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
	/*while (a)
	{
		printf("%d\n", a->num);
		a = a->next;
	}*/
}

