/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controls1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 19:27:46 by skaynar           #+#    #+#             */
/*   Updated: 2025/02/10 20:07:09 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void clear_array(char **array)
{
    int i;
    i = 0;
    while (array[i])
        free(array[i++]);
    free(array);
}

int linectl(int *line, int size)
{
    int i;
    i = 0;
    while (i < size - 1)
    {
        if (line[i] < line[i + 1])
            i++;
        else
            return (0);
    }
    return 1;
}
