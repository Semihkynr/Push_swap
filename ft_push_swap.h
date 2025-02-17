/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:06:56 by skaynar           #+#    #+#             */
/*   Updated: 2025/02/17 13:12:03 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}					t_stack;

int					control(char *av, t_stack **a ,t_stack **b);
int					linectl(int *line, int size);
int					stoa(t_stack **change);
long				my_atoi(const char *str);

void				clear_array(char **array);
void				sortalg(t_stack **a, t_stack **b);
void				acnumctl(int ac, t_stack **htc, t_stack **smh);

int					min_index(t_stack **stack);
int					max_bit(t_stack **stack);
int					distance(t_stack **stack, int index);

void ft_error(t_stack **stack_a,t_stack **stack_b ,char **repo);

void				find_index(t_stack **stack_a);

t_stack				*ft_lstnew(int content);
t_stack				*ft_lstlast(t_stack *lst);
void				ft_lstclear(t_stack **lst);
void				ft_lstadd_back(t_stack **lst, t_stack *new);
int					ft_lstsize(t_stack *lst);

void				sa(t_stack **node_a);
void				sb(t_stack **node_b);
void				ss(t_stack **node_a, t_stack **node_b);

void				ra(t_stack **node_a);
void				rb(t_stack **node_b);
void				rr(t_stack **node_a, t_stack **node_b);

void				pa(t_stack **node_a, t_stack **node_b);
void				pb(t_stack **node_a, t_stack **node_b);

void				rra(t_stack **node_a);
void				rrb(t_stack **node_b);
void				rrr(t_stack **node_a, t_stack **node_b);

#endif