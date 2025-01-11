/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 19:27:53 by skaynar           #+#    #+#             */
/*   Updated: 2025/01/10 18:51:48 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void print(t_stack **list)
{   
    t_stack *start;
    start = *list;
    
    while(start)
        {
            printf("%d\n", start->content);
            start = start->next;
        }
}

int main(int ac ,char **av)
{   
    t_stack **stack_a;
    int i;
    i = 1;
    stack_a = malloc(sizeof(t_stack *));
    // stack_b = malloc(sizeof(t_stack));
    
    if(ac < 2)
        return (0);
    while(i < ac)
        {
            control(av[i++],stack_a);
        }
    stoa(stack_a);
    return (0);

}

// stack a ve b yi oluştur
// argğmanları atoi
// atoiden dönen değeri kontrol et
// eğer tüm değerler oekyse pushla