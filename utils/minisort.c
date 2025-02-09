/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minisort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:03:04 by skaynar           #+#    #+#             */
/*   Updated: 2025/02/09 16:01:17 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	twoctl(t_stack **a)
{
	if ((*a)->content > (*a)->next->content)
		sa(a);
}

void	thrctl(t_stack **a)
{
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

void	fourctl(t_stack **h, t_stack **s)
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

void	acnumctl(int ac, t_stack **htc, t_stack **smh)
{
	if (ac == 2)
		twoctl(htc);
	if (ac == 3)
		thrctl(htc);
	if (ac == 4)
		fourctl(htc, smh);
	if (ac > 4)
	{
		pb(htc, smh);
		pb(htc, smh);
		pb(htc, smh);
		pb(htc, smh);
		pb(htc, smh);
		sortalg(htc, smh);
	}
}
