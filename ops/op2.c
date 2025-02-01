/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:07:01 by skaynar           #+#    #+#             */
/*   Updated: 2025/02/01 10:41:04 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*add;
	t_stack	*last;

	add = *b;
	if ((*b)->next == *b)
		*b = NULL;
	else
	{
		last = *b;
		while (last->next != *b)
			last = last->next;
		*b = (*b)->next;
		last->next = *b;
	}
	add->next = *a;
	if (*a)
	{
		last = *a;
		while (last->next != *a)
			last = last->next;
		last->next = add;
	}
	else
		add->next = add;
	*a = add;
	write(1, "pa\n", 3);
}


void	pb(t_stack **a, t_stack **b)
{
	t_stack	*add;
	t_stack	*last;

	add = *a;
	if ((*a)->next == *a)
		*a = NULL;
	else
	{
		last = *a;
		while (last->next != *a)
			last = last->next;
		*a = (*a)->next;
		last->next = *a;
	}
	add->next = *b;
	if (*b)
	{
		last = *b;
		while (last->next != *b)
			last = last->next;
		last->next = add;
	}
	else
		add->next = add;
	*b = add;
	write(1, "pb\n", 3);
}

