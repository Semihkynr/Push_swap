/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_controls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:39:06 by skaynar           #+#    #+#             */
/*   Updated: 2025/01/10 18:59:41 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void ft_error()
{
    write(1, "Error\n", 6);
    exit (0);
}
void samectl(int *iarr)
{   
    int j;
    j = 1;
    int i;
    i = 0;
    while(iarr[i])
    {
        while(iarr[j])
        {
            if(iarr[i] == iarr[j])
                ft_error();  
            else
                j++;          
        }
        i++;
        j = i;
        // 42 "45 4" 5 verince hata alıyo
    }
    
}
void numctl(char *str)
{
    int j;
    j = 0;
    while(str[j])
    {
        if(str[j] == '-')
            j++;
        while(!ft_isdigit(str[j]))
           ft_error();
        j++;
    }
}
void stoa (t_stack **change)
{
    int array[ft_lstsize(*change)];
    int i;
    i = 0;
    t_stack *strt;
    strt = *change;
    while(strt)
    {
        array[i] = strt->content;
        strt = strt->next;
        i++;
    }
    samectl(array);
}

int control(char *av, t_stack **a)
{   
    int i;
    i = 0;
    char **repo;
    repo = ft_split(av, ' ');
    while(repo[i])
    {
        numctl(repo[i]);
        ft_atoi(repo[i]);
        ft_lstadd_back(a,ft_lstnew(ft_atoi(repo[i])));
        i++;
    }
return (0);    
}
