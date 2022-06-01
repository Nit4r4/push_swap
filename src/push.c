/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferraro <vferraro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:39:22 by vferraro          #+#    #+#             */
/*   Updated: 2022/05/24 16:22:23 by vferraro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack *stack)
{
	int	slot;

	slot = stack->size_a + 1;
	if (stack->size_b == 0)
		return ;
	if (stack->size_a == 0)
		stack->stack_a[0] = stack->stack_b[0];
	if (stack->size_a > 0)
	{
		while (--slot > 0)
			stack->stack_a[slot] = stack->stack_a[slot - 1];
		stack->stack_a[0] = stack->stack_b[0];
	}
	slot = -1;
	while (++slot < stack->size_b)
		stack->stack_b[slot] = stack->stack_b[slot + 1];
	stack->size_a++;
	stack->size_b--;
	ft_printf("pa\n");
}

void	push_b(t_stack *stack)
{
	int	slot;

	slot = stack->size_b + 1;
	if (stack->size_a == 0)
		return ;
	if (stack->size_b == 0)
		stack->stack_b[0] = stack->stack_a[0];
	if (stack->size_b > 0)
	{
		while (--slot > 0)
			stack->stack_b[slot] = stack->stack_b[slot - 1];
		stack->stack_b[0] = stack->stack_a[0];
	}
	slot = -1;
	while (++slot < stack->size_a)
		stack->stack_a[slot] = stack->stack_a[slot + 1];
	stack->size_a--;
	stack->size_b++;
	ft_printf("pb\n");
}
