/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:15:42 by skaynar           #+#    #+#             */
/*   Updated: 2025/02/10 20:52:25 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	sortalg(t_stack **a, t_stack **b)
{
	t_stack	*fake_a;
	int		i;
	int		j;
	int		max_bits;

	i = 0;
	fake_a = *a;
	max_bits = max_bit(a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < ft_lstsize(fake_a))
		{
			fake_a = *a;
			if ((fake_a->index >> i) & 1)
				ra(a);
			else
				pb(a, b);
        }
		while (ft_lstsize(*b))
			pa(a, b);
		i++;
	}
}
