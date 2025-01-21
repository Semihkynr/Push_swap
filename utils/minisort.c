/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minisort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:03:04 by skaynar           #+#    #+#             */
/*   Updated: 2025/01/21 13:46:36 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void twoctl (t_stack **a)
{
    if((*a)->content > (*a) ->next->content)
        sa(a);
}
void thrctl(t_stack **a)
{
    if((*a)-> content > (*a) -> next -> content )
        {
            printf("%d\n",(*a)->content);
            printf("%d\n",(*a)->next->content);
            printf("%d\n",(*a)->next->next->content);
            sa(a);
            printf("%d\n",(*a)->content);
            printf("%d\n",(*a)->next->content);
            printf("%d\n",(*a)->next->next->content);
            if((*a) -> next -> content > (*a) -> next -> next -> content )
                rra(a);
            if((*a) -> content  > (*a) -> next -> content)
                sa(a);
        }
    if ((*a) -> next -> content > (*a) -> next -> next -> content)
        {
            rra(a);
            if ((*a) -> content > (*a) -> next -> content)
                sa(a);
        }
    printf("--%d\n",(*a)->content);
    printf("--%d\n",(*a)->next->content);
    printf("--%d\n",(*a)->next->next->content);
}
void fourctl (t_stack **h,t_stack **s)
{
    pb(h,s);
    thrctl(h);
    pa(h,s);
    if((*h) -> content > (*h) -> next -> next -> next ->content)
        ra(h);
    if ((*h) -> content > (*h) -> next -> next -> content)
        {
            rra(h);
            pb(h,s);
            ra(h);
            pa(h,s);
            ra(h);
        }
    if ((*h) -> content > (*h) -> next -> content)
        sa(h);
}

void acnumctl(int ac, t_stack **htc, t_stack **smh)
{
    if(ac == 3)
        twoctl(htc);
    if(ac == 4)
        thrctl(htc);
    if(ac == 5)
        fourctl(htc,smh);
    // if(ac > 5)
    //     sortalg();
}
