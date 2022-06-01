/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferraro <vferraro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:00:12 by vferraro          #+#    #+#             */
/*   Updated: 2022/05/31 12:02:18 by vferraro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *stack)
{
	int	temp;

	if (stack->stack_a == 0)
		exit (0);
	temp = stack->stack_a[0];
	stack->stack_a[0] = stack->stack_a[1];
	stack->stack_a[1] = temp;
	ft_printf("sa\n");
}

void	swap_b(t_stack *stack)
{
	int	temp;

	if (stack->stack_b == 0)
		exit (0);
	temp = stack->stack_b[0];
	stack->stack_b[0] = stack->stack_b[1];
	stack->stack_b[1] = temp;
	ft_printf("sb\n");
}

void	swap_ss(t_stack *stack)
{
	int	temp_a;
	int	temp_b;

	if (stack->stack_a == 0 || stack->size_b == 0)
		return ;
	if ((stack->stack_a[0] != 0 && stack->stack_a[1] != 0) || \
	(stack->stack_b[0] != 0 && stack->stack_b[1] != 0))
	{
		temp_a = stack->stack_a[0];
		temp_b = stack->stack_b[0];
		stack->stack_a[0] = stack->stack_a[1];
		stack->stack_a[1] = temp_a;
		stack->stack_b[0] = stack->stack_b[1];
		stack->stack_b[1] = temp_b;
		ft_printf("ss\n");
	}
}
