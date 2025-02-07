/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:06:56 by skaynar           #+#    #+#             */
/*   Updated: 2025/02/07 16:25:24 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

////
#include <stdio.h>
////
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

typedef struct s_list
{   
    int			    content;
	struct s_list	*next;
}					t_stack;

int control(char *av, t_stack **a);
int linectl(int *line, int size);
int numctl(char *str);
int stoa (t_stack **change);
int samectl(int *iarr, int size);
int intctl(long arr);

void clear_array(char **array);
void twoctl (t_stack **a);
void thrctl(t_stack **a);
void fourctl (t_stack **h,t_stack **s);
void acnumctl(int ac, t_stack **htc, t_stack **smh);
void sortalg(t_stack **a, t_stack **b);

t_stack	*ft_lstnew(int content);
t_stack	*ft_lstlast(t_stack *lst);
void	ft_lstclear(t_stack **lst);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
int	ft_lstsize(t_stack *lst);

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
