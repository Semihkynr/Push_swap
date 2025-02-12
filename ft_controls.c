/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_controls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:39:06 by skaynar           #+#    #+#             */
/*   Updated: 2025/02/12 20:07:06 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	intctl(long arr)
{
	if (arr > 2147483647 || arr < -2147483648)
		return (0);
	return (1);
}

int	samectl(int *iarr, int size)
{
	int	j;
	int	i;

	j = 1;
	i = 0;
	while (i < size)
	{
		while (j < size)
		{
			if (iarr[i] == iarr[j])
				return (0);
			else
				j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int	numctl(char *str)
{
	int	j;
	int	a;

	j = 0;
	a = 0;
	while (str[j])
	{
		if (str[j] == '-' || str[j] == '+')
		{
			j++;
			a++;
		}
		if (!ft_isdigit(str[j]))
			return (0);
		if (a == 2)
			return (0);
		j++;
	}
	return (1);
}

int	stoa(t_stack **change)
{
	int		*array;
	int		i;
	t_stack	*strt;
	int		size;

	size = ft_lstsize(*change);
	array = malloc(size * sizeof(int));
	i = 0;
	strt = *change;
	while (strt)
	{
		array[i] = strt->content;
		strt = strt->next;
		i++;
	}
	if (!samectl(array, ft_lstsize(*change)))
		return (write(1, "Error\n", 6), free(array), 0);
	if (linectl(array, ft_lstsize(*change)))
		return (free(array), 0);
	free(array);
	return (1);
}

int	control(char *av, t_stack **a)
{
	int		i;
	char	**repo;

	i = 0;
	repo = ft_split(av, ' ');
	if (!repo || !repo[0])
		return (free(repo), 0);
	while (repo[i])
	{
		if (!numctl(repo[i]))
		{
			clear_array(repo);
			return (0);
		}
		if (!my_atoi(repo[i]))
		{
			clear_array(repo);
			return (0);
		}
		ft_lstadd_back(a, ft_lstnew(my_atoi(repo[i])));
		i++;
	}
	clear_array(repo);
	return (1);
}
