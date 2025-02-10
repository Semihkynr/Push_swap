/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:48:16 by skaynar           #+#    #+#             */
/*   Updated: 2025/02/10 20:45:26 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

t_stack	*next_min(t_stack **stack)
{
	t_stack	*head;
	t_stack	*min_node;

	head = *stack;
	min_node = NULL;
	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (head->index == -1)
		{
			if (!min_node || head->content < min_node->content)
				min_node = head;
		}
		head = head->next;
	}
	return (min_node);
}

void	fill_index_a(t_stack **stack_a)
{
	t_stack	*fakestack;
	int		index;

	index = 0;
	fakestack = next_min(stack_a);
	while (fakestack != NULL)
	{
		fakestack->index = index++;
		fakestack = next_min(stack_a);
	}
}
int	distance(t_stack **stack, int index)
{
	t_stack	*fakestack;
	int		distance;

	distance = 0;
	fakestack = *stack;
	while (fakestack)
	{
		if (fakestack->index == index)
			break ;
		distance++;
		fakestack = fakestack->next;
	}
	return (distance);
}

int	min_index(t_stack **stack)
{
	t_stack	*fakestack;
	int		min;

	fakestack = *stack;
	min = fakestack->index;
	while (fakestack->next)
	{
		fakestack = fakestack->next;
		if (fakestack->index < min)
			min = fakestack->index;
	}
	return (min);
}
int	max_bit(t_stack **stack)
{
	t_stack	*fakestack;
	int		max_index;
	int		max_bit;

	fakestack = *stack;
	max_index = fakestack->index;
	max_bit = 0;
	while (fakestack != NULL)
	{
		if (fakestack->index > max_index)
			max_index = fakestack->index;
		fakestack = fakestack->next;
	}
	while (max_index >> max_bit)
		max_bit++;
	return (max_bit);
}
