/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:03:04 by skaynar           #+#    #+#             */
/*   Updated: 2025/01/18 16:28:33 by skaynar          ###   ########.fr       */
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
            sa(a);
            if((*a) -> next -> content > (*a) -> next -> next -> content )
                rra(a);
            if((*a) -> content  > (*a) -> next -> content)
                sa(a);
        }
    else // burda hata var normal sıralıyı da else yeriine sokup işlem yapıyo buda 4 lü sıralarken sıkıntı çıkarıyo 3 2 4 6 girip test et
        {
            rra(a);
            if ((*a) -> content > (*a) -> next -> content)
                sa(a);
        }
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
    printf("%d\n",(*h) ->content);
    printf("%d\n",(*h) -> next ->content);
    printf("%d\n",(*h) -> next -> next ->content);
    printf("%d\n",(*h) -> next -> next -> next ->content);
}
void acnumctl(int ac, t_stack **htc, t_stack **smh)
{
    if(ac == 3)
        twoctl(htc);
    if(ac == 4)
        thrctl(htc);
    if(ac == 5)
        fourctl(htc,smh);
}
// a b c d
// 3 2 4 6 -- 2 3 4 6
// 5 2 4 6 -- 6 5 2 4 -- 5 2 4 -- 2 4 5 -- 6 2 4 5 -- 2 4 5 6
// 7 2 4 6 -- 2 4 6 7


// p -> content = a
// p -> next -> content = b
// p -> next -> next -> content = c
// p -> next -> next -> next ->content = d

// ra yukardan aşağı rra aşağıdan yukarı