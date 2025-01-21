/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listfnc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:34:21 by skaynar           #+#    #+#             */
/*   Updated: 2025/01/21 13:45:13 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

t_stack	*ft_lstnew(int content)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (0);
	node->content = content;
	node->next = node;
	return (node);
}
t_stack	*ft_lstlast(t_stack *lst)
{
	t_stack *tmp;
	tmp = lst;
	if (!tmp)
		return (NULL);
	while (tmp->next != lst)
		tmp = tmp->next;
	return (tmp);
}
void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*end;

	if (!*lst)
	{
		*lst = new;
		new->next = *lst; 
	}
	else
	{
		end = ft_lstlast(*lst);
		new->next = *lst;
		end->next = new;
	}
}


int	ft_lstsize(t_stack *lst)
{
	int		i;
	t_stack	*start;

	if (!lst)
		return (0);
	start = lst;
	i = 1;
	while (start->next != lst)
	{
		i++;
		start = start->next;
	}
	return (i);
}
void	ft_lstclear(t_stack **lst)
{
	t_stack	*temp;

	if (lst == NULL || *lst == NULL)
		return ;
	while (*lst)
	{
		temp = *lst;
		*lst = temp->next;
		free(temp);
	}
	*lst = NULL;
}