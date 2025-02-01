/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_controls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:39:06 by skaynar           #+#    #+#             */
/*   Updated: 2025/02/01 11:56:21 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void intctl(long arr)
{
    if(arr > 2147483647 || arr < -2147483648)
        ft_error();
}
void samectl(int *iarr, int size)
{   
    int j;
    j = 1;
    int i;
    i = 0;
    while(i < size)
    {
        while(j < size)
        {
            if(iarr[i] == iarr[j])
                ft_error();  
            else
                j++;          
        }
        i++;
        j = i + 1;
    }
}
void numctl(char *str)
{
    int j;
    j = 0;
    int a;
    a = 0;
    while(str[j])
    {
        if(str[j] == '-' || str[j] == '+')
        { 
            j++;
            a++; 
        }
        while(!ft_isdigit(str[j]))
           ft_error();
        if (a == 2)
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
    while(strt->next != *change)
    {
        array[i] = strt->content;
        strt = strt->next;
        i++;
    }
    array[i] = strt->content;
    samectl(array,ft_lstsize(*change));
    linectl(array,ft_lstsize(*change));
}

int control(char *av, t_stack **a)
{   
    int i;
    i = 0;
    char **repo;
    repo = ft_split(av, ' ');
    if (!repo || !repo[0])
    {
        free(repo);
        return(0);
    }
    while(repo[i])
    {
        numctl(repo[i]);
        intctl(ft_atoi(repo[i]));
        ft_lstadd_back(a,ft_lstnew(ft_atoi(repo[i])));
        i++;
    }
    
    free(repo);
return (0);    
}
