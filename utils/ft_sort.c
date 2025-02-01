/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:15:42 by skaynar           #+#    #+#             */
/*   Updated: 2025/02/01 14:58:13 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void maxmin(t_stack **a, t_stack **b)
{
    int minvalue;
    int maxvalue;
    if (!maxvalue)
        maxvalue = (*a)->content;
    if(!minvalue)
        minvalue = (*a)->content;
    if ((*a)->content > maxvalue)
        maxvalue = (*a)->content;
    if ((*a)->content < minvalue)
        minvalue = (*a)->content;
    
}

void sortalg(t_stack **a, t_stack **b)
{
    int i;
    i = ft_lstsize(a);
    while(i > 3)
    {   
        maxmin(a,b);
        pb(a,b);
        i--;
    }
}
// hamle sayıcı yapılcak
