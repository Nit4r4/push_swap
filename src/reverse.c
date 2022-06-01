/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferraro <vferraro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:11:42 by vferraro          #+#    #+#             */
/*   Updated: 2022/05/24 13:55:26 by vferraro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rot_rra(t_stack *stack)
{
	int	size_a;
	int	temp;

	temp = stack->stack_a[stack->size_a - 1];
	size_a = stack->size_a;
	while (size_a-- > 0)
		stack->stack_a[size_a] = stack->stack_a[size_a - 1];
	stack->stack_a[0] = temp;
	ft_printf("rra\n");
}

void	reverse_rot_rrb(t_stack *stack)
{
	int	size_b;
	int	temp;

	temp = stack->stack_b[stack->size_b - 1];
	size_b = stack->size_b;
	while (size_b-- > 0)
		stack->stack_b[size_b] = stack->stack_b[size_b - 1];
	stack->stack_b[0] = temp;
	ft_printf("rrb\n");
}

void	reverse_rot_rrr(t_stack *stack)
{
	reverse_rot_rra(stack);
	reverse_rot_rrb(stack);
	ft_printf("\r\r\b\r\r\arrr\n");
}
