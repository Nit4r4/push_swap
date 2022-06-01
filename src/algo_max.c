/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferraro <vferraro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:58:31 by vferraro          #+#    #+#             */
/*   Updated: 2022/05/31 11:48:09 by vferraro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort_stack_a(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->size_a - 1)
	{
		j = i + 1;
		if (stack->stack_a[i] < stack->stack_a[j])
			i++;
		else
			return (0);
	}
	return (1);
}

int	nbr_bit(t_stack *stack)
{
	int	i;
	int	len;

	i = 0;
	len = stack->size_a;
	while (len)
	{
		len = len / 2;
		i++;
	}
	return (i + 1);
}

int	sort_algo_max(t_stack *stack)
{
	int	i;
	int	j;
	int	max;

	i = -1;
	max = nbr_bit(stack);
	while (++i < max && !check_sort_stack_a(stack))
	{
		j = stack->size_a;
		while (j-- > 0)
		{
			if (stack->stack_a[0] >> i & 1)
				rotate_ra(stack);
			else
				push_b(stack);
		}
		j = stack->size_b;
		while (stack->size_b)
			push_a(stack);
	}
	j = stack->size_b;
	while (j-- > 0)
		push_a(stack);
	return (0);
}
