/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:10:49 by skaynar           #+#    #+#             */
/*   Updated: 2025/02/08 13:51:48 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static void	rrotate(t_stack **node)
{
	t_stack	*end;
	t_stack	*second_end;

	if (ft_lstsize(*node) > 1)
	{
		end = ft_lstlast(*node);
		second_end = *node;
		while (second_end->next != end)
			second_end = second_end->next;
		second_end->next = NULL;
		end->next = *node;
		*node = end;
	}
	return ;
}

void	rra(t_stack **node_a)
{
	rrotate(node_a);
    update_index(*node_a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **node_b)
{
	rrotate(node_b);
	update_index(*node_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **node_a, t_stack **node_b)
{
	rrotate(node_a);
	rrotate(node_b);
	update_index(*node_a);
	update_index(*node_b);
	write(1, "rrr\n", 4);
}