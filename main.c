/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 19:27:53 by skaynar           #+#    #+#             */
/*   Updated: 2025/02/01 11:45:06 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

// void print(t_stack **a,t_stack **b)
// {
//     t_stack *aa;
//     t_stack *bb;
//     aa = *a;
//     bb = *b;
//     while(aa)
//         {   
//             printf(" A STACK : %d\n", aa->content);
//             aa = aa -> next;
//         }
//     while(bb)
//         { 
//             printf(" B STACK : %d\n", bb->content);
//             bb = bb-> next;
//         }
// }
int main(int ac ,char **av)
{
    t_stack **stack_a;
    t_stack **stack_b;
    int i;
    i = 1;
    stack_a = malloc(sizeof(t_stack *));
    stack_b = malloc(sizeof(t_stack *));
    if(ac < 2)
        return (0);
    while(i < ac)
        control(av[i++],stack_a);
    stoa(stack_a);
    acnumctl(ac , stack_a, stack_b);
    // ft_lstclear(stack_a);
    // ft_lstclear(stack_b);
    return (0);
}
