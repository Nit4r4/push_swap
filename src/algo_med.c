/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_med.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferraro <vferraro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:58:17 by vferraro          #+#    #+#             */
/*   Updated: 2022/05/24 13:46:54 by vferraro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four(t_stack *stack)
{
	while (stack->size_b < 1)
	{
		while (stack->stack_a[0] != 3)
			rotate_ra(stack);
		push_b(stack);
	}
	sort_algo_min(stack);
	push_a(stack);
	rotate_ra(stack);
}

void	sort_five(t_stack *stack)
{
	while (stack->size_b < 2)
	{
		while (stack->stack_a[0] != 3 && stack->stack_a[0] != 4)
		{
			rotate_ra(stack);
		}
		push_b(stack);
	}
	sort_algo_min(stack);
	if (stack->stack_b[0] == 3)
	{
		push_a(stack);
		rotate_ra(stack);
		push_a(stack);
		rotate_ra(stack);
	}
	else
	{
		push_a(stack);
		push_a(stack);
		rotate_ra(stack);
		rotate_ra(stack);
	}
}
