/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 19:27:53 by skaynar           #+#    #+#             */
/*   Updated: 2025/01/16 13:23:51 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int main(int ac ,char **av)
{   
    t_stack **stack_a;
    // t_stack **stack_b;
    int i;
    i = 1;
    stack_a = malloc(sizeof(t_stack *));
    // stack_b = malloc(sizeof(t_stack *));
    if(ac < 2)
        return (0);
    while(i < ac)
        control(av[i++],stack_a);
    stoa(stack_a);
    if(ac == 2)
       // 2,3,4 argüman girilme kontrolleri yapılcak yazılcak herşey stacke atıldı o işlemi yapıyorum zaten  
    return (0);
}
