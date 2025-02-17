/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 19:27:53 by skaynar           #+#    #+#             */
/*   Updated: 2025/02/17 13:47:19 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void ft_error(t_stack **stack_a,t_stack **stack_b ,char **repo)
{
	write(1,"Error\n",6);
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
	clear_array(repo);
	exit(1);
}
int	count_item(char *av)
{
	int		i;
	char	**repo;

	i = 0;
	repo = ft_split(av, ' ');
	while (repo[i])
		i++;
	clear_array(repo);
	return (i);
}

int	fakemain(int ac, char **av, t_stack **stack_a, t_stack **stack_b)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	while (i < ac)
		count += count_item(av[i++]);
	i = 1;
	while (i < ac)
	{
		if (!control(av[i++], stack_a, stack_b))
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	if (!stoa(stack_a))
		return (0);
	find_index(stack_a);
	acnumctl(count, stack_a, stack_b);
	return (1);
}

int	main(int ac, char **av)
{
	t_stack	**stack_a;
	t_stack	**stack_b;

	stack_a = malloc(sizeof(t_stack *));
	stack_b = malloc(sizeof(t_stack *));
	if (ac < 2)
	{
		free(stack_a);
		free(stack_b);
		return (0);
	}
	fakemain(ac, av, stack_a, stack_b);
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
	return (0);
}
