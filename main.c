/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 19:27:53 by skaynar           #+#    #+#             */
/*   Updated: 2025/02/12 20:02:26 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	print_stack(t_stack *stack)
{
	t_stack	*current;

	current = stack;
	while (current != NULL)
	{
		printf("Content: %d, Index: %d", current->content, current->index);
		if (current->next != NULL)
			printf("\n");
		current = current->next;
	}
	printf("\n");
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
		if (!control(av[i++], stack_a))
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	if (!stoa(stack_a))
		return (0);
	fill_index_a(stack_a);
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
