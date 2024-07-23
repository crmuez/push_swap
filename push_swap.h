/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:08:59 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/07/23 15:45:29 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>
# include <stdio.h>
# include <string.h>
# include <stddef.h>

typedef struct s_stack
{
	int				num;
	int				pos;
	int				target;
	int				cost_a;
	int				cost_b;
	int				cost_total;
	int				index;
	struct s_stack	*next;
}					t_stack;

int		ft_atol(char *str);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);
t_stack	*ft_lstlast(t_stack *lst);
int		ft_lstsize(t_stack *lst);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
char	*ft_substr(char const *s, unsigned int start, size_t len);
t_stack	*ft_lstnew(int number);
int		ft_abs(int num);
int		check_numbers(char **str);
void	save_number(t_stack **a, char **num);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	sa(t_stack **a, int print);
void	sb(t_stack **b, int print);
void	ss(t_stack **a, t_stack **b);
void	ra(t_stack **a, int print);
void	rb(t_stack **b, int print);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a, int print);
void	rrb(t_stack **b, int print);
void	rrr(t_stack **a, t_stack **b);
void	set_index(t_stack **a);
int		order_check(t_stack **a);
void	sort_3(t_stack **a);
void	short_sort(t_stack **a);
void	big_algorit(t_stack **a, t_stack **b);
void	get_target(t_stack *a, t_stack *b);
void	set_cost_a(t_stack **a, t_stack **b);
void	set_cost_total(t_stack *b);
void	moves(t_stack **a, t_stack **b);

#endif