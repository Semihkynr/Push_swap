/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op0.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:38:39 by skaynar           #+#    #+#             */
/*   Updated: 2025/02/20 12:57:35 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static void	swap(t_stack **node)
{
	t_stack	*first;
	t_stack	*second;

	first = *node;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*node = second;
}

void	sa(t_stack **node_a)
{
	swap(node_a);
	write(1, "sa\n", 3);
}

void	sb(t_stack **node_b)
{
	swap(node_b);
	write(1, "sb\n", 3);
}
