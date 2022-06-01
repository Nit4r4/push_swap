/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferraro <vferraro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:54:53 by vferraro          #+#    #+#             */
/*   Updated: 2022/05/31 11:48:38 by vferraro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_just_two(t_stack *stack)
{
	if (stack->stack_a[0] > stack->stack_a[1])
		swap_a(stack);
	else
		exit (0);
}

void	sort_one(t_stack *stack)
{
	if (stack->stack_a[1] > stack->stack_a[2])
	{
		reverse_rot_rra(stack);
		swap_a(stack);
	}
}

void	sort_two(t_stack *stack)
{
	if (stack->stack_a[1] < stack->stack_a[2])
		swap_a(stack);
	else if (stack->stack_a[1] > stack->stack_a[2])
		reverse_rot_rra(stack);
}

void	sort_three(t_stack *stack)
{
	if (stack->stack_a[1] < stack->stack_a[2])
	{
		reverse_rot_rra(stack);
		reverse_rot_rra(stack);
	}
	else if (stack->stack_a[1] > stack->stack_a[2])
	{
		rotate_ra(stack);
		swap_a(stack);
	}
}

int	sort_algo_min(t_stack *stack)
{
	if (stack->stack_a[0] < stack->stack_a[1] \
	&& stack->stack_a[0] < stack->stack_a[2])
		sort_one(stack);
	else if (stack->stack_a[0] > stack->stack_a[1] \
	&& stack->stack_a[0] > stack->stack_a[2])
		sort_three(stack);
	else
		sort_two(stack);
	return (0);
}
