/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:07:01 by skaynar           #+#    #+#             */
/*   Updated: 2025/02/10 20:55:09 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	pa(t_stack **node_a, t_stack **node_b)
{
	t_stack	*add;

	if (*node_b != NULL)
	{
		add = *node_b;
		*node_b = (*node_b)->next;
		add->next = *node_a;
		*node_a = add;
		write(1, "pa\n", 3);
	}
	return ;
}


void	pb(t_stack **node_a, t_stack **node_b)
{
	t_stack		*add;

	if (*node_a != NULL)
	{
		add = *node_a;
		*node_a = (*node_a)->next;
		add->next = *node_b;
		*node_b = add;
		write(1, "pb\n", 3);
	}
	return ;
}
