/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op0.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:38:39 by skaynar           #+#    #+#             */
/*   Updated: 2025/01/09 14:31:22 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static void     swap(t_stack **node)
{
    int temp;
    
    if(ft_lstsize(*node) > 1)
    {
        temp = (*node)->next->content;
        (*node)->next->content = (*node)->content;
        (*node)->content = temp;
    }
    return ;
}
void sa (t_stack **node_a)
{
    swap(node_a);
    write(1,"sa\n",3);    
}
void sb (t_stack **node_b)
{
    swap(node_b);
    write(1,"sb\n",3);
}
void ss (t_stack **node_a ,t_stack **node_b)
{
    swap(node_a);
    swap(node_b);
    write(1,"ss\n",3);
}