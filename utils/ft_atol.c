/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:59:34 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/22 17:44:18 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atol(char *str)
{
	int		i;
	long	sign;
	long	n;

	i = 0;
	sign = 1;
	n = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = ((n * 10) + (str[i] - '0'));
		i++;
	}
	return (n * sign);
}

int	ft_abs(int num)
{
	if (num < 0)
		num = -num;
	return (num);
}
