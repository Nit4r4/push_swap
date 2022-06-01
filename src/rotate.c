/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferraro <vferraro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:11:29 by vferraro          #+#    #+#             */
/*   Updated: 2022/05/24 13:55:58 by vferraro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_ra(t_stack *stack)
{
	int	i;
	int	temp;

	temp = stack->stack_a[0];
	i = 0;
	while (i < stack->size_a - 1)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->stack_a[stack->size_a - 1] = temp;
	ft_printf("ra\n");
}

void	rotate_rb(t_stack *stack)
{
	int	i;
	int	temp;

	temp = stack->stack_b[0];
	i = -1;
	while (++i < stack->size_b - 1)
		stack->stack_b[i] = stack->stack_b[i + 1];
	stack->stack_b[stack->size_b - 1] = temp;
	ft_printf("rb\n");
}

void	rotate_rr(t_stack *stack)
{
	rotate_ra(stack);
	rotate_rb(stack);
	ft_printf("\r\a\r\brr\n");
}
