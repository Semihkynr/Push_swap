/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minisort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:03:04 by skaynar           #+#    #+#             */
/*   Updated: 2025/02/20 12:53:06 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static void	twoctl(t_stack **a)
{
	if ((*a)->content > (*a)->next->content)
		sa(a);
}

static void	thrctl(t_stack **a)
{
	if ((*a)->content > (*a)->next->content
		&& (*a)->content > (*a)->next->next->content)
		ra(a);
	if ((*a)->content > (*a)->next->content)
	{
		if ((*a)->next->content > (*a)->next->next->content)
			rra(a);
		if ((*a)->content > (*a)->next->content)
			sa(a);
	}
	if ((*a)->next->content > (*a)->next->next->content)
	{
		rra(a);
		if ((*a)->content > (*a)->next->content)
			sa(a);
	}
}

static void	fourctl(t_stack **h, t_stack **s)
{
	pb(h, s);
	thrctl(h);
	pa(h, s);
	if ((*h)->content > (*h)->next->next->next->content)
		ra(h);
	if ((*h)->content > (*h)->next->next->content)
	{
		rra(h);
		pb(h, s);
		ra(h);
		pa(h, s);
		ra(h);
	}
	if ((*h)->content > (*h)->next->content)
		sa(h);
	return ;
}

static void	fivectl(t_stack **a, t_stack **b)
{
	int	d;

	d = distance(a, min_index(a));
	if (d == 1)
		sa(a);
	else if (d == 2)
	{
		ra(a);
		ra(a);
	}
	else if (d == 3)
	{
		rra(a);
		rra(a);
	}
	else if (d == 4)
		rra(a);
	pb(a, b);
	fourctl(a, b);
	pa(a, b);
}

void	acnumctl(int ac, t_stack **htc, t_stack **smh)
{
	if (ac == 2)
		twoctl(htc);
	if (ac == 3)
		thrctl(htc);
	if (ac == 4)
		fourctl(htc, smh);
	if (ac == 5)
		fivectl(htc, smh);
	if (ac > 5)
		sortalg(htc, smh);
}
