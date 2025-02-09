/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:15:42 by skaynar           #+#    #+#             */
/*   Updated: 2025/02/09 19:06:49 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	numberfindb(int a, t_stack **b, int ac)
{
	t_stack	*fakeb;
	int		min;
	int		max;

	min = -2147483648;
	max = -2147483648;
	fakeb = *b;
	while (fakeb)
	{
		if (a > fakeb->content && fakeb->content > min)
		{
			ac++;
			min = fakeb->content;
		}
		else
		{
			if (max < fakeb->content)
				max = fakeb->content;
		}
		fakeb = fakeb->next;
	}
	if (ac > 0)
		return (min);
	return (max);
}

int	distance(t_stack **a, t_stack **b)
{
	t_stack	*bhead;
	int		i;
	int		j;

	j = -1;
	i = 0;
	bhead = *b;
	while (bhead->content != numberfindb((*a)->content, b, 0) && bhead->next)
	{
		bhead = bhead->next;
		i++;
	}
	while (bhead->next)
	{
		bhead = bhead->next;
		j--;
	}
	j *= -1;
	if (i <= j)
		return (i);
	else
	{
		j *= -1;
		return (j);
	}
}
int movecount(t_stack **stacka, t_stack **stackb)
{
    int i;
    int index_a;
    int index_b;
    i = 0;
    if((*stacka)->index > ft_lstsize(stacka) / 2 )
        index_a = (*stacka)->index;
    else 
        index_a = (*stacka)->index - ft_lstsize(stacka) / 2;
    if ((*stackb)->index > ft_lstsize(stackb) / 2 )
        index_b = (*stackb)->index;
    else
        index_b = (*stackb)->index - ft_lstsize(stackb) / 2;
    
}

void	sortalg(t_stack **a, t_stack **b)
{
	int	disb;

	// int disa;
	// disa = distance(b,a);
	// printf("%d\n",disa);
	disb = distance(a, b);
	update_index(*a);
    movecount(a,b);
	update_index(*b);
	print_stack(*a);
	printf("a%db\n", disb);
	print_stack(*b);
}
// ./push_swap 6 3 8 5 2 4 7 1 9
