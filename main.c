/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 19:27:53 by skaynar           #+#    #+#             */
/*   Updated: 2025/02/04 19:10:34 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int main(int ac ,char **av)
{   
    t_stack **stack_a;
    t_stack **stack_b;
    int i;
    i = 1;
    stack_a = malloc(sizeof(t_stack *));
    stack_b = malloc(sizeof(t_stack *));
    if(ac < 2)
    {
        free(stack_a);
        free(stack_b);
        return (0);
    }
    while(i < ac)
    {
        if (!control(av[i++],stack_a))
        {
            ft_lstclear(stack_a);
            write (1, "Error\n", 6);
            return (0);
        }
    }
    if (!stoa(stack_a))
    {
        ft_lstclear(stack_a);
        write (1, "Error\n", 6);

        return (0);
    }
    acnumctl(ac , stack_a, stack_b);
    // ft_lstclear(stack_a);
    // ft_lstclear(stack_b);
    return (0);
    
}
