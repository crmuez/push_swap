/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:56:18 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/06/04 19:14:34 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**num;
	int		i;
	int		j;

	a = NULL;
	b = NULL;
	i = 0;
	j = 0;
	if ((argc == 2 && !argv[1][0]) || argc < 2)
		write(2, "Error\n", 6);
	else if (argc == 2)
	{
		num = ft_split(argv[1], ' ');
		check_numbers(num);
	}
//	a = ft_atol(num); -> hay que guardar los numeros en el stack, e ir comprobando que no esté repetido
}
