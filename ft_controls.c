/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_controls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:27:30 by skaynar           #+#    #+#             */
/*   Updated: 2025/01/09 17:10:51 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void ft_error()
{
    write(1, "Error\n", 6);
    exit (0);
}
int negative(char *av)
{
    
}
int control(char *av)
{   
    int ctlatoi;
    int i;
    int j;
    i = 0;
    char **repo;
    if(av)
    repo = ft_split(av, ' ');
    while(repo[i])
    {
        j = 0;
        while (repo[i][j])
        {
            if (!ft_isdigit(repo[i][j]))
                {
                    ft_error();
                    return (0);
                }
            j++;
        }
        ctlatoi =(ft_atoi(repo[i]));
        i++;
    }
return (0);    
}
