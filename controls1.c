/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controls1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 19:27:46 by skaynar           #+#    #+#             */
/*   Updated: 2025/02/04 19:00:23 by skaynar          ###   ########.fr       */
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

void ft_error()
{
    write(1, "Error\n", 6);
    exit (1);
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
            return 0;  // Artan sırada değilse 0 döner
    }

    return 1;  // Artan sıradaysa 1 döner
}

