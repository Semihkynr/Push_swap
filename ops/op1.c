/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:59:14 by skaynar           #+#    #+#             */
/*   Updated: 2025/02/20 12:57:31 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static void	rotate(t_stack **node)
{
	t_stack	*first;
	t_stack	*last;

	if (ft_lstsize(*node) > 2)
	{
		first = *node;
		last = ft_lstlast(*node);
		*node = (*node)->next;
		last->next = first;
		first->next = NULL;
	}
	return ;
}

void	ra(t_stack **node_a)
{
	rotate(node_a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **node_b)
{
	rotate(node_b);
	write(1, "rb\n", 3);
}
