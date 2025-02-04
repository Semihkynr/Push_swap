/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controls1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 19:27:46 by skaynar           #+#    #+#             */
/*   Updated: 2025/02/04 15:18:41 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void ft_error(char *av,t_stack **x)
{   
    free(av);
    ft_lstclear(x);
    write(1, "Error\n", 6);
    exit (0);
}
void linectl(int *line, int size)
{
    int i;
    i = 0;
    while(i < size -1)
    {
        if(line[i] < line[i + 1])
            i++;
        else
            return ;
    }
    exit(0);
}
